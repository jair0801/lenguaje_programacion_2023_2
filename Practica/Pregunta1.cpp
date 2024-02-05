//Calcular el puntaje final del postulante de una prueba de 20 preguntas
#include <iostream>
using namespace std;

int main() {
    int respuestas_correctas, respuestas_incorrectas, respuestas_blanco;
    cout << "Ingrese la cantidad de respuestas correctas: ";
    cin >> respuestas_correctas;
    cout << "Ingrese la cantidad de respuestas incorrectas: ";
    cin >> respuestas_incorrectas;
    cout << "Ingrese la cantidad de respuestas en blanco: ";
    cin >> respuestas_blanco;

    // Calcular el puntaje
    int puntaje = respuestas_correctas * 4 - respuestas_incorrectas*2;

    cout << "El puntaje total del postulante es de : " << puntaje << " puntos." << endl;

    return 0;
}