#include<iostream>

using namespace std;

int main(){
    int a, b, c;
    cout<<"Ingrese el primer numero"<<endl;
    cin>>a;
    cout<<"Ingrese el segundo numero"<<endl;
    cin>>b;
    cout<<"Ingrese el tercer numero"<<endl;
    cin>>c;
    if (a==b||b==c||c==a){
        cout<<"hay numeros repetidos";
    }else{
        if (a<b||b<c){
            cout<<a<<" es el numero menor y "<<c<<" es el numero mayor"<<endl;
        }else{
            if (a>b||b>>c){
                 cout<<c<<" es el numero menor y "<<a<<" es el numero mayor"<<endl;
            }else{
                if (b>a||a>c){
                     cout<<c<<" es el numero menor y "<<b<<" es el numero mayor"<<endl;
                }else{
                     if(b>a||b<c){
                         cout<<b<<" es el numeor menor y "<<c<<" es el numero mayor"<<endl;
                   }else{
                       cout<<b<<" es el numero menor y "<<a<<" es el numero mayor"<<endl;
                }
            }
        }
    }

}
}