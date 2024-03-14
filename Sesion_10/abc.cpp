#include <iostream>
#include <string>
using namespace std;

struct Estudiante
{
    string nombre;
    string apellido;
    int edad;
    float nota[3];
    float promedio;
    
};
Estudiante estud[3];

void promedio(Estudiante estudiante[3]);
void ingresar_estudiantes();
void mostrar_promedio(Estudiante estudiante[3]);

int main()
{
    cout << "Registro de estudiantes" << endl;
    ingresar_estudiantes();
    promedio(estud);
    mostrar_promedio(estud);
    return 0;
}

void ingresar_estudiantes()
{
    cout << "Ingrese los estudiantes a registrar" << endl;
    
    for (int i = 0; i < 3; i++)
    {
        cout << "ingrese su nombre" << endl;
        cin >> estud[i].nombre;
        cout << "ingrese su apellido" << endl;
        cin >> estud[i].apellido;
        cout << "ingrese la edad de nacimiento" << endl;
        cin >> estud[i].edad;
        cout << "Ingrese las notas del estudiante" << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "ingrese la nota" << j + 1 << endl;
            cin >> estud[i].nota[j];
        }
    }
}
void promedio(Estudiante estudiante[3])
{
    for (int i = 0; i < 3; i++)
    {
        float suma = 0;
        for (int j = 0; j < 3; j++)
        {
            suma = suma + estudiante[i].nota[j];
        }
        estudiante[i].promedio = suma / 3;
    }
}

void mostrar_promedio(Estudiante estudiante[3])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "El promedio del estudiante" << endl;
        cout << estudiante[i].apellido << " " << estudiante[i].nombre << " es : " << endl;
        cout << estudiante[i].promedio << endl;
    }
}