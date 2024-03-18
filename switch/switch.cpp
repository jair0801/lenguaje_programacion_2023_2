#include <iostream>
using namespace std;

int main() {
    int opcion;

    cout << "Ingrese un número del 1 al 3: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ha ingresado el número 1" << endl;
            break;
        case 2:
            cout << "Ha ingresado el número 2" << endl;
            break;
        case 3:
            cout << "Ha ingresado el número 3" << endl;
            break;
        default:
            cout << "Número no válido. Debe ser del 1 al 3." << endl;
            break;
    }

    return 0;
}
