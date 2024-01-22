//elaborar un programa que calcule el area del triangulo conociendo sus 3 lados e identifique el tipo de triangulo

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float lado1, lado2, lado3;
    cout << "Ingrese el lado 1 del triangulo: ";
    cin >> lado1;
    cout << "Ingrese el lado 2 del triangulo: ";
    cin >> lado2;
    cout << "Ingrese el lado 3 del triangulo: ";
    cin >> lado3;

    //primero hallamos el semiperimetro ya que se necesita para usar en la otra formula de triangulo
    float semiperimetro = (lado1 + lado2 + lado3) / 2;

   //aqui aplicamos la formula del triangulo que se puede usar en caso de no tener la altura
    float area = sqrt(semiperimetro * (semiperimetro - lado1) * (semiperimetro - lado2) * (semiperimetro - lado3));

    //aqui ponemos condicionales para saber que tipo de triagulo es 
    if (lado1 == lado2 && lado2 == lado3) {
        cout << "El triangulo es equilatero." << endl;
    } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
        cout << "El triangulo es isosceles." << endl;
    } else {
        cout << "El triangulo es escaleno." << endl;
    }

    // Mostrar el área del triángulo
    cout << "El area del triangulo es: " << area << endl;

    return 0;
}