#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    srand(time(0));

    int nota = rand() % 21;

    cout << "Nota aleatoria generada: " << nota << endl;

    char letra;

    if (nota >= 18 && nota <= 20) {
        letra = 'A';
    } else if (nota >= 15 && nota <= 17) {
        letra = 'B';
    } else if (nota >= 11 && nota <= 14) {
        letra = 'C';
    } else {
        letra = 'D';
    }

    cout << "Calificacion correspondiente: " << letra << endl;

    return 0;
}
