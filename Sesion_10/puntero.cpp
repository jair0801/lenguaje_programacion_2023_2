#include <iostream>
using namespace std;

int main(){
    int arreglo[5] = {1,2,3,4,5};
    int *puntero;

    puntero = arreglo;

    for (int i=0; i<10 ;i++){
        cout<<"Ingrese la nota "<<i+1<<":"<<endl;
        cin >>i;
    
    }
    return 0;
}

