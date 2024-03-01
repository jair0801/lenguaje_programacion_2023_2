#include <iostream>
using namespace std;

int main(){
    int numero=10;
    int *puntero;

    puntero = &numero;
    cout<< puntero << endl;
    cout << *puntero<<endl;
    return 0;
}