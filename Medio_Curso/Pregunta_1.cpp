#include <iostream>
using namespace std;

int main(){
    int numeroAdivinar=34;
    int intento, intentosRealizados = 0;
    const int maxIntentos = 5;

    do
    {
   
        cout << "Ingresa tu numero: ";
        cin >> intento;
        if (intento == numeroAdivinar)
        {
            cout << "¡Felicidades! ¡Adivinaste el numero correctamente en " << intentosRealizados + 1 << " intentos!" << endl;
            break;
        }
        else
        {

            if (intento < numeroAdivinar)
            {
                cout << "El numero a adivinar es mayor." << endl;
            }
            else
            {
                cout << "El numero a adivinar es menor." << endl;
            }

            intentosRealizados++;
            if (intentosRealizados >= maxIntentos)
            {
                cout << "Has excedido el numero máximo de intentos. El número correcto era: " << numeroAdivinar << endl;
                break;
            }
        }

    } while (true);

    return 0;
}          