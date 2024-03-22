#include <iostream>
using namespace std;

// Función con parámetro por defecto
void saludar(string nombre = "Invitado") {
    cout << "¡Hola, " << nombre << "!" << endl;
}

int main() {
    // Llamadas a la función saludar() con diferentes argumentos
    saludar();            // Salida: ¡Hola, Invitado!
    saludar("Juan");      // Salida: ¡Hola, Juan!
    saludar("María");     // Salida: ¡Hola, María!
    
    return 0;
}
