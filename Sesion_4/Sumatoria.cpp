#include <iostream>
using namespace std;

int main()
{
    int numero;
    cout<<"Ingrese hasta que numero quiere que se realice la suma "<<endl;
    cin>>numero;
    int suma = 0;
    for (int i = 1; i <= numero; i++)
    {
        suma = suma + i;
        
    }
    cout << "El valor de la sumatoria es:";
    cout << suma;
    return 0;
}