#pragma once
#include <string>
using namespace std;

class Persona{
public:
    //enum TipoGenero {FEMENINO, MASCULINO};
    enum TipoGenero {MASCULINO, FEMENINO};
    Persona(string Nombre, string Apellido, TipoGenero Genero);
    string obtenerNombre();
    TipoGenero obtenerGenero();
private:
    string Nombre, Apellido;
    TipoGenero Genero;
};