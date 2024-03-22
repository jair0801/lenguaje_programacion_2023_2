#include <iostream>
#include <string>
using namespace std;

// Clase base abstracta
class Animal {
public:
    virtual void sonido() const = 0; // Función virtual pura
};

// Clase derivada Perro
class Perro : public Animal {
public:
    void sonido() const override {
        cout << "Guau guau!" << endl;
    }
};

// Clase derivada Gato
class Gato : public Animal {
public:
    void sonido() const override {
        cout << "Miau miau!" << endl;
    }
};

int main() {
    Perro perro;
    Gato gato;

    // Uso polimórfico de la función sonido()
    Animal* animal1 = &perro;
    Animal* animal2 = &gato;

    animal1->sonido(); // Salida: Guau guau!
    animal2->sonido(); // Salida: Miau miau!

    return 0;
}


