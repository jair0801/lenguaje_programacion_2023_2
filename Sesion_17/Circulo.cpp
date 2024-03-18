#include <iostream>
using namespace std;

class Circulo
{
private:
    float radio;

public:
    Circulo(float r)
    {
        radio = r;
    }
    float GetRadio() const
    {
        return radio;
    }

    void SetRadio(float r)
    {
        radio = r;
    }

    float calcular_circulo(float r)
    {
        return 3.1416 * (r * r);
    }
};
