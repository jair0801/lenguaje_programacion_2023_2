#include <iostream>
using namespace std;

class Cuadrado
{
private:
    float lado;

public:
    Cuadrado(float _lado)
    {
        lado = _lado;
    }

    float getLado()
    {
        return lado;
    }
    void setLado(float l)
    {
        lado = l;
    };
    float calcular_cuadrado(float l){
        return l * l;
    }
};