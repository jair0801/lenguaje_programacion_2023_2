#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    float notas[10];
    float suma = 0;
    float promedio;
    float nota_maxima;

    // Solicitar las notas y realizar la suma
    for (int i = 0; i < 10; i++) {
        do {
            cout << "Ingrese la nota del estudiante " << i+1 << " (de 0 a 20): ";
            cin >> notas[i];
            if (notas[i] < 0 || notas[i] > 20) {
                cout << "La nota debe estar en el rango de 0 a 20. Por favor, ingrese una nota válida." << endl;
            }
        } while (notas[i] < 0 || notas[i] > 20);
        suma += notas[i];
    }

    // Calcular el promedio
    promedio = suma / 10;

    // Calcular la nota máxima
    nota_maxima = *max_element(notas, notas + 10);

    // Ordenar las notas de mayor a menor
    sort(notas, notas + 10, greater<float>());

    // Mostrar los resultados
    cout << "Nota máxima: " << nota_maxima << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Suma de todas las notas: " << suma << endl;
    cout << "Notas ordenadas de mayor a menor: ";
    for (int i = 0; i < 10; i++) {
        cout << notas[i] << " ";
    }

    return 0;
}