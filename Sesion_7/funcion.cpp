#include <iostream>
#include <string>
//mayotia de edad
//promdeio
//aprobo
using namespace std;
struct Alumno{
    string nombre;
    string apellido;
    int edad;
    int notas[3];
    float promedio;
};
int mayoria_edad(int edad){
    if (edad>=18){
        cout<<"Es mayor de edad";
    }else{
        cout <<"Es menor de edad";
    }
}
void registro_promedio (int notas[3]){
    promedio= (notas[3])/3;
}
    



int main(){
    Alumno alumno1;
    Alumno alumno2;
    for (int i=0; i<3; i++){
    cout<<"Ingrese su nota "<<i+1<<":";
    cin>>alumno1.notas[i];
    cout<<promedio;
}
return 0;
}







