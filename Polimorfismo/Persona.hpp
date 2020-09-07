#pragma once
#include <string>
using namespace std;

class Persona {
    public:
        Persona(string Nombre, string Apellido);
        string obtenerNombre();
        virtual double ingresos() const = 0; //virtual pura
        virtual void imprimir() const;
    private:
        string Nombre,Apellido;
};