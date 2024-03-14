#include <iostream>
using namespace std;

class Circulo
{
private:
    double radio;

public:
    Circulo(double _radio)
    {
        radio = _radio;
    };
    double calcular_area(double pi = 3.1416) {
    return pi * radio;
    }
};