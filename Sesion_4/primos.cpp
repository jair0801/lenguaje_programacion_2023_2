#include <iostream>
using namespace std;

int main() {
    int n;
    bool esPrimo = true;

    cout << "Ingrese un número : ";
    cin >> n;

    if (n <= 1) {
        cout << "El número no es primo." <<endl;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                esPrimo = false;
                break;
            }
        }

        if (esPrimo) {
            cout << "El número es primo." <<endl;
        } else {
            cout << "El número no es primo." <<endl;
        }
    }

    return 0;
}