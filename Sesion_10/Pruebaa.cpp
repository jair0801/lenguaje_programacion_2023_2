#include <iostream>
#include <string>
using namespace std;

struct Nacimiento
{
    string nombre;
    string apellido;
    int ano_nacimient[3];
    int ano_actual;
};
Nacimiento dato[3];
void edad_actual(Nacimiento dato[3]);
void ingresar_datos();
void mostrar_edad(Nacimiento dato[3]);



int main(){
cout <<"Registro de edades"<<endl;
edad_actual(dato);
ingresar_datos();
mostrar_edad(dato);
return 0;
}

void ingresar_datos()
{
    cout <<"Ingrese los datos a ingresar";

    for(int i=0;i<3;i++)
    {
        cout<<"Ingrese su nombre"<<endl;
        cin >>dato[i].nombre<<endl;
        cout<<"Ingrese su apellido"<<endl;
        cin >>dato[i].apellido<<endl;
        cout <<"Ingrese el ano actual";
        cin  >>  ano_actual;
        cout << "Ingrese el ano de nacimiento" << endl;
        for (int j = 0; j < 1; j++)
        {
            cout << "ingrese el ano de nacimiento" << j + 1 << endl;
            cin >> dato[i].ano_nacimiento[j];
        }
        
        cout<<"La edad de "<<endl;
        cout<<dato[i].nombre<<" "<<dato[i].apellido<<"es de "<< edad;
    }
}
    



