#include <iostream>
using namespace std;

class CarroVan
{
private:
    int id_van;
    int nro_acientos;
    string cilindeada;
    string motor;

public:
int GetId_van() const {
return id_van;
}

void SetId_van(int id_van) {
id_van = id_van;
}

    int GetNro_acientos() const {
        return nro_acientos;
    }

    void SetNro_acientos(int nro_acientos) {
        nro_acientos = nro_acientos;
    }

    string GetCilindeada() const {
        return cilindeada;
    }

    void SetCilindeada(string cilindeada) {
        cilindeada = cilindeada;
    }

    string GetMotor() const {
        return motor;
    }

    void SetMotor(string motor) {
        motor = motor;
    }
};  


