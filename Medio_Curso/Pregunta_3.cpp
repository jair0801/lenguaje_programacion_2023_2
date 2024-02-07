#include <iostream>
using namespace std;

int main (){
    int horas;
    int sueldo=0;
    cout << "ingrese sus horas de trabajo"<<endl;
    cin >> horas;
    if(horas <=40){
        sueldo=horas * 20;
        cout <<"Tu sueldo semanal sera de : " <<sueldo<<endl;
    }else{
        if(horas >40){
            float horas_extra = horas - 40;
            sueldo = 800 + (horas_extra * 25);
            cout <<"Tu sueldo semanal sera de : "<<sueldo<<endl;
        }
    }
    return 0;
}