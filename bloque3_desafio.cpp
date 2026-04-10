#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void mostrarEstudiantes(string nombres[], double notas[], int tam){
for (int i = 0; i < tam; i++){
cout << fixed << setprecision(2) << nombres[i] << ": " << notas[i] << endl;
}
}

void ajustarNota (double* nota, double bonus){
    *nota = *nota + bonus;
if (*nota  > 10) {
        *nota = 10;
        
    }
}

void normalizarNotas( double notas[], int tam, double& promedio){
double suma = 0;
    for (int i = 0; i < tam; i++){
        suma += notas[i];
    }
    promedio = suma / tam;
    cout << "Promedio del curso: " <<promedio << endl;
}

int main(){
string nombres[4] = {"Juan", "Sofia", "Carlos", "Alez"};
double notas[4] = { 1.0, 9.0, 7.0, 8.0};
cout << "===== Registro inicial =====" << endl;
mostrarEstudiantes(nombres, notas, 4);


cout << "===== Registro final =====" << endl;

ajustarNota(&notas[1], 0.5);
for (int i = 0; i < 4; i++){
    cout << nombres[i] << ": " << notas[i] << endl;
    }
    
double promedio;
normalizarNotas(notas, 4, promedio);



    return 0;
}