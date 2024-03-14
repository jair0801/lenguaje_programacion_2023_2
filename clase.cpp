#include <iostream>
using namespace std;

class Triangulo
{
private:
    float lado_1;
    float lado_2;
    float lado_3;

public:
    Triangulo(float l1, float l2, float l3)
    {
        lado_1 = l1;
        lado_2 = l2;
        lado_3 = l3;
    }
    

    float getlado_1()
    {
        return lado_1;
    }
    void setlado_1(float l1)
    {
        lado_1 = l1;
    } 
    float getlado_2()
    {
        return lado_2;
    }
    void setlado_2(float l2)
    {
        lado_2 = l2;
    } 
    float getlado_3()
    {
        return lado_3;
    }
    void setlado_3(float l3)
    {
        lado_3 = l3;
    } 

    float calcular_area(float lado_1, float lado_2, float lado_3);
};