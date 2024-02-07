#include <iostream>
using namespace std;

const int numCursos = 3;
const int numNotas = 4;

int main() {
    
    float notas[numCursos][numNotas];

    
    for (int curso = 0; curso < numCursos; ++curso) {
        cout << "Curso " << curso + 1 << endl;

        for (int alumno = 0; alumno < numNotas; ++alumno) {
            cout << "Ingrese la nota del alumno " << alumno + 1 << ": ";
            cin >> notas[curso][alumno];
        }
    }

    
    cout << "\nPromedio de cada alumno:\n";

    for (int alumno = 0; alumno < numNotas; ++alumno) {
        float sumaNotas = 0;

        for (int curso = 0; curso < numCursos; ++curso) {
            sumaNotas += notas[curso][alumno];
        }

        float promedio = sumaNotas / numCursos;
        cout << "Alumno " << alumno + 1 << ": " << promedio << endl;
    }

    return 0;
}
