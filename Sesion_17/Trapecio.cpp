#include <iostream>
using namespace std;

class Trapecio
{
private:
    float base_mayor;
    float base_menor;
    float altura;

public:
    Trapecio(float _bmayor, float _bmenor, float _altura)
    {
        base_mayor = _bmayor;
        base_menor = _bmenor;
        altura = _altura;
    }
    float getbase_mayor()
    {
        return base_mayor;
    }
    void setbase_mayor(float _bmayor)
    {
        base_mayor = _bmayor;
    };
     float getbase_menor()
    {
        return base_menor;
    }
    void setbase_menor(float _bmenor)
    {
        base_mayor = _bmenor;
    };
     float getaltura()
    {
        return altura;
    }
    void setaltura(float _altura)
    {
        altura = _altura;
    };
    float calcular_trapecio(float _bmayor,float _bmenor,float _altura){
        return ((_bmayor + _bmenor)/ 2)* _altura;
    }
};