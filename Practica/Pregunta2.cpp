//elaborar un programa que permita calcular el puntaje de un equipo de futbol 
#include <iostream>
using namespace std;

int main() {
    int partidos_ganados, partidos_empatados, partidos_perdidos;
    cout << "Ingrese la cantidad de partidos ganados: ";
    cin >> partidos_ganados;
    cout << "Ingrese la cantidad de partidos empatados: ";
    cin >> partidos_empatados;
    cout << "Ingrese la cantidad de partidos perdidos: ";
    cin >> partidos_perdidos;

    
    int puntaje = partidos_ganados * 3 + partidos_empatados;

    cout << "El puntaje del equipo después de 20 partidos es: " << puntaje << " puntos." << endl;

    return 0;
}