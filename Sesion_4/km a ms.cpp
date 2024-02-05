#include <iostream>
using namespace std;
int main() {
    int KmPorHora, MetrosPorSegundo;

    cout << "Ingrese la velocidad del automóvil en kilómetros por hora: ";
    cin >> KmPorHora;

    MetrosPorSegundo = KmPorHora * 5 / 18;

    cout << "La velocidad del automóvil es " << MetrosPorSegundo << " metros por segundo." <<endl;

    return 0;
    
}