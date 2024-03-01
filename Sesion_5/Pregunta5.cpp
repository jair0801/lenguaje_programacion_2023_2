//realice un algoritmo 
//que permita determinar pago a la compañia y lo que debe pagar cada 
//alumno por viaje
#include <iostream>
using namespace std;

int main() {
    int numeroAlumnos;
    const int costoPorAlumno1 = 65;
    const int costoPorAlumno2 = 70;
    const int costoPorAlumno3 = 95;
    const int costoAutobus = 4000;

    // Solicitar el número de alumnos
    cout << "Ingrese el numero de alumnos: ";
    cin >> numeroAlumnos;

    // Calcular el costo por alumno y el costo total del viaje
    int costoPorAlumno;
    int costoTotal;

    if (numeroAlumnos >= 100) {
        costoPorAlumno = costoPorAlumno1;
        costoTotal = numeroAlumnos * costoPorAlumno1;
    } else if (numeroAlumnos >= 50 && numeroAlumnos <= 99) {
        costoPorAlumno = costoPorAlumno2;
        costoTotal = numeroAlumnos * costoPorAlumno2;
    } else if (numeroAlumnos >= 30 && numeroAlumnos <= 49) {
        costoPorAlumno = costoPorAlumno3;
        costoTotal = numeroAlumnos * costoPorAlumno3;
    } else {
        costoPorAlumno = costoAutobus / numeroAlumnos;
        costoTotal = costoAutobus;
    }

    // Mostrar resultados
    cout << "Pago por alumno: $" << costoPorAlumno << endl;
    cout << "Costo total del viaje: $" << costoTotal << endl;

    return 0;
}
