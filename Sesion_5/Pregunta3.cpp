#include <iostream>
using namespace std;

int main() {
    const int produccionMinima = 100;
    const float incentivoBase = 50.0;
    const float incentivoPorUnidad = 1.5;

    int produccionTotal = 0;

    
    for (int dia = 1; dia <= 6; ++dia) {
        int produccionDiaria;
        cout << "Ingrese la produccion del dia " << dia << ": ";
        cin >> produccionDiaria;

        produccionTotal += produccionDiaria;
    }

    
    float incentivo = 0.0;

    if (produccionTotal >= produccionMinima) {
        incentivo = incentivoBase + (produccionTotal - produccionMinima) * incentivoPorUnidad;
    }

   
    cout << "Produccion total: " << produccionTotal << " unidades" << endl;
    cout << "Incentivo: $" << incentivo << endl;

    return 0;
}
