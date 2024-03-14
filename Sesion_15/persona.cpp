#include <iostream>
#include <string>
using namespace std;

class Persona
{
private:
    int id;
    string apellidos;
    string nombres;
    string dni;
    string direccion;

public:
    int GetId() const
    {
        return id;
    }

    void SetId(int id)
    {
        id = id;
    }

    string GetApellidos() const
    {
        return apellidos;
    }

    void SetApellidos(string apellidos)
    {
        apellidos = apellidos;
    }

    string GetNombres() const
    {
        return nombres;
    }

    void SetNombres(string nombres)
    {
        nombres = nombres;
    }

    string GetDni() const
    {
        return dni;
    }

    void SetDni(string dni)
    {
        dni = dni;
    }

    string GetDireccion() const
    {
        return direccion;
    }

    void SetDireccion(string direccion)
    {
        direccion = direccion;
    }
};