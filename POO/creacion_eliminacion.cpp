#include <iostream>
using namespace std;

class MiClase {
public:
    MiClase() {
        cout << "Se ha creado un objeto." << endl;
    }

    ~MiClase() {
        cout << "Se ha eliminado un objeto." << endl;
    }

    void someMethod() {
        cout << "¡Hola desde someMethod!" << endl;
    }
};

int main() {
    cout << "Creación dinámica de objetos:" << endl;

    // Creación dinámica de un objeto MiClase
    MiClase* objPtr = new MiClase();

    // Acceso a miembros del objeto creado dinámicamente
    // (se utiliza el operador -> para acceder a los miembros de un objeto apuntado por un puntero)
    cout << "Acceso a miembros del objeto creado dinámicamente: ";
    objPtr->someMethod();
    cout << endl;

    cout << "Eliminación dinámica de objetos:" << endl;

    // Eliminación dinámica del objeto creado anteriormente
    delete objPtr;

    return 0;
}
