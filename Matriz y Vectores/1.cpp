#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declaración e inicialización de una matriz de enteros utilizando vectores de vectores
    vector<vector<int>> matriz = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Accediendo a elementos de la matriz mediante índices de fila y columna
    cout << "Elementos de la matriz:" << endl;
    for (const auto& fila : matriz) {
        for (int elemento : fila) {
            cout << elemento << " ";
        }
        cout << endl;
    }

    return 0;
}
   