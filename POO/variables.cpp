#include <iostream>
using namespace std;

void miFuncion() {
    // Declaración de variables locales dentro de la función
    int x = 10;
    float y = 3.14;
    char letra = 'A';

    // Se pueden realizar operaciones con las variables locales
    float resultado = x * y;

    // Se puede imprimir el valor de una variable local
    cout << "El valor de x es: " << x << endl;
    cout << "El valor de y es: " << y << endl;
    cout << "El valor de letra es: " << letra << endl;
    cout << "El resultado de la operación es: " << resultado << endl;
}

int main() {
    // Llamada a la función
    miFuncion();

    // Las variables locales no son accesibles fuera de su ámbito
    // Esto causará un error de compilación
    // cout << "El valor de x fuera de la función es: " << x << endl;
    
    return 0;
}
