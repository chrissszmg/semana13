// Ejercicio 2.1 — Lee el codigo y predice cada salida
/*Lo que hace el codigo: p es un puntero que guarda la direccion de memoria de stock. Con *p accedes al valor
que esta en esa direccion. Con *p = 180 modificas ese valor directamente.
Tu tarea: escribe tu prediccion en cada comentario // (N) ___, luego copia y ejecuta el programa para verificar. */
#include <iostream>
using namespace std;
int main() {
int stock = 250;
int* p = &stock;
cout << stock << endl; // (1) 250
cout << p << endl; // (2) 0x7ffe24528254 (direccion hexadecimal)
cout << *p << endl; // (3) 250
*p = 180; // se vendieron 70 unidades
cout << stock << endl; // (4) 180
return 0;
}


// Ejercicio 2.2 — Escribe el cuerpo de la funcion con puntero
/* Lo que debes hacer: dentro de aplicarIVA() el parametro precio es un puntero. Para leer o modificar el valor al
que apunta debes usar *precio. Escribe una sola linea que multiplique el valor apuntado por (1 + iva).
Como llamarla desde main(): se pasa &precio (la direccion de la variable), no el valor directamente. */
void aplicarIVA(double* precio, double iva) {
*precio = *precio * (1 + iva);
}
int main() {
double precio = 100.00;
aplicarIVA(&precio, 0.12);
cout << "Precio con IVA: " << precio << endl; // 112.00
return 0;
}


// Ejercicio 2.3 — Compara referencia y puntero: ¿en que difieren?
/*Las dos funciones hacen exactamente lo mismo. Lee ambas versiones y responde las tres preguntas en tu archivo
bloque2_punteros.cpp como comentarios: */
/* Con Referencia (&) 
void incrementar(int& val, int n){
val += n;
}
// Como se llama:
int contador = 10;
incrementar(contador, 5);


Con Puntero (*)
void incrementar(int* val, int n){
*val += n;
}
// Como se llama:
int contador = 10;
incrementar(&contador, 5);
*/
//■ Pregunta 1: ¿Como se llama la funcion en cada caso? Escribe las dos lineas de llamada y senala la diferencia.
/*Referencia: incrementar(contador, 5); y con Puntero incrementar (&contador, 5); La diferencia es que con referencia se pasa el valor 
directamente, mientras que con puntero se pasa la direccion de memoria usando &contador. */


//■ Pregunta 2: ¿Que operador aparece dentro del CUERPO de la version con puntero que no aparece en la version con
//referencia?
/* Aparece el operador * el cual el valor que se encuentra guardado ahi*/


//■ Pregunta 3: Despues de ejecutar, ¿contador vale 15 en ambos casos? Escribe si o no y explica por que.
/*En los dos casos el contador vale 15 ya que el primero modifica el valor directamente y el segundo accede al valor a través del puntero. */