/*Paso 1.1 — Una referencia es un alias del mismo dato
Lo que hace el codigo: ref no es una copia de saldo — es el mismo dato con otro nombre. Modificar ref es
exactamente igual a modificar saldo directamente. 
Tu tarea: copia el programa, escribe tu prediccion en el comentario // ? y ejecuta para verificar. */
#include <iostream>
using namespace std;
int main() {
double saldo = 1500.00;
double& ref = saldo; // ref es otro nombre para saldo
ref = 2000.00;
cout << "saldo = " << saldo << endl; // 2000.00
cout << "ref = " << ref << endl; // 2000.00
return 0;
}


/*Paso 1.2 — Referencia como parametro: la funcion modifica el original
Lo que hace el codigo: el parametro saldo dentro de la funcion es una referencia a la variable cuenta de main().
Cualquier cambio que haga la funcion afecta directamente a cuenta.
Tu tarea: copia el programa, predice el valor que imprime cuenta despues de llamar la funcion y verifica */
#include <iostream>
using namespace std;
void aplicarDescuento(double& saldo, double porcentaje) {
saldo = saldo - (saldo * porcentaje);
}
int main() {
double cuenta = 500.00;
aplicarDescuento(cuenta, 0.10); // aplica 10% de descuento
cout << "Saldo final: " << cuenta << endl; // 450.00, porque se pasa por referencia y la funcion modifica el valor original de cuenta.
return 0;
}


/*Paso 1.3 — Escribe tu la funcion con referencias
Lo que debes hacer: implementa el cuerpo de intercambiar(). La funcion debe intercambiar los valores de a y b
usando una variable temporal. Al terminar, x debe valer 42 e y debe valer 15.
Pista: necesitas exactamente 3 lineas: int temp = a; luego asigna a = b; y finalmente b = temp; */
#include <iostream>
using namespace std;
void intercambiar(int& a, int& b) {
    int temp =a;
    a = b;
    b = temp;
}
int main() {
int x = 15, y = 42;
intercambiar(x, y);
cout << "x = " << x << ", y = " << y << endl;
// output correcto: x = 42, y = 15
return 0;
}







    
