#include <iostream>
using namespace std;

int main() {
    int x = 10;

    // Declaración de un puntero que apunta a la dirección de memoria de la variable x
    int* ptr = &x;

    // Mostrar el valor de la variable x y su dirección de memoria
    cout << "El valor de x es: " << x << endl;
    cout << "La dirección de memoria de x es: " << &x << endl;

    // Mostrar el valor de la variable apuntada por el puntero y la dirección de memoria del puntero
    cout << "El valor apuntado por ptr es: " << *ptr << endl;
    cout << "La dirección de memoria de ptr es: " << &ptr << endl;

    return 0;
}
