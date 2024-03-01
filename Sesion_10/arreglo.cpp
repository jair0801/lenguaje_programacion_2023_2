#include <iostream>
#include <cmath>
using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(numero); ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    const int tamanoArreglo = 10;
    int numerosPrimos[tamanoArreglo];
    int contadorPrimos = 0;

    cout << "Ingrese numeros para verificar si son primos:" << std::endl;

    while (contadorPrimos < tamanoArreglo) {
        int numero;
        cout << "Numero #" << contadorPrimos + 1 << ": ";
        cin >> numero;

        if (esPrimo(numero)) {
            numerosPrimos[contadorPrimos] = numero;
            ++contadorPrimos;
            cout << numero << " es primo y ha sido guardado." << std::endl;
        } else {
            cout << numero << " no es primo." << std::endl;
        }
    }

    cout << "Numeros primos almacenados en el arreglo:" << std::endl;
    for (int i = 0; i < tamanoArreglo; ++i) {
        cout << numerosPrimos[i] << " ";
    }

    return 0;
}
