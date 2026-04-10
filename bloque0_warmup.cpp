/*Ejercicio 0.1
El parametro lectura se recibe por valor (sin &). ¿Que valor tiene temperatura despues de llamar la funcion? */
#include <iostream>
using namespace std;
void resetSensor(int lectura) {
lectura = 0;
cout << "Dentro de la funcion: " << lectura << endl;
}
int main() {
int temperatura = 38;
resetSensor(temperatura);
cout << "En main, temperatura = " << temperatura << endl; // el valor que tiene temperatura despues de llamar la funcion es 38.
return 0;
}


/*Ejercicio 0.2
Ahora el parametro tiene & — se recibe por referencia. ¿Cambia ahora el valor de temperatura en main()? */

#include <iostream>
using namespace std;
void resetSensor(int& lectura) { // <-- nota el &
lectura = 0;
cout << "Dentro de la funcion: " << lectura << endl;
}
int main() {
int temperatura = 38;
resetSensor(temperatura);
cout << "En main, temperatura = " << temperatura << endl; // Si, ahora el valor de temperatura en main() cambia a 0, porque se pasa por referencia.
return 0;
}


/*Ejercicio 0.3
Lee la siguiente firma de funcion y la llamada desde main(). Marca la opcion que describe correctamente que le
pasa a precio despues de ejecutar la funcion: */
void aplicarIVA(double& precio, double iva) {
precio *= (1 + iva);
}
int main() {
double precio = 100.00;
aplicarIVA(precio, 0.12);
// aqui, precio vale 112.00 porque se pasa por referencia (&) y la funcion modifica la variable original.
}
//B) precio ahora vale 112.00 — la referencia modifico el original.
