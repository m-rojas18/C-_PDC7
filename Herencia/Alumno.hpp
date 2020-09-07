#pragma once
#include <string>
#include "Persona.hpp"

class Alumno : public Persona{
    string NumeroCuenta;
    public:
        Alumno(string Nombre,string Apellido, Persona::TipoGenero Genero, string NumeroCuenta);
        string obtenerNumero();
};