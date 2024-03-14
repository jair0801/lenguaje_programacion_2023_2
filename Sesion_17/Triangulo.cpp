#include <iostream>
using namespace std;

class Triangulo
{
private:
    int altura;
    int base;

public:
    Triangulo(int _altura, int _base)
    {
        altura = _altura;
        base = _base;
    }
    float getbase()
    {
        return base;
    }
    void setbase(float _base)
    {
        base = _base;
    };
    float getaltura()
    {
        return altura;
    }
    void setaltura(float _altura)
    {
        altura = _altura;
    };
    float calcular_area(int _altura,int _base){
        return (_base * _altura) / 2;
    }
};