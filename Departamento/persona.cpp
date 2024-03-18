#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Declaración de la clase Persona
class Persona {
protected:
    string nombre;
    int edad;
public:
    Persona(const string& nombre, int edad) : nombre(nombre), edad(edad) {}
    virtual double calcularSalario() const = 0; // Método virtual puro
    virtual void mostrarDatos() const {
        cout << "Nombre: " << nombre << ", Edad: " << edad;
    }
};

// Declaración de la clase Empleado que hereda de Persona
class Empleado : public Persona {

float sueldo;
private:
Persona( );
Empleado(float _sueldo){
sueldo = _sueldo;
}
};
