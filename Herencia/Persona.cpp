#include "Persona.hpp"

Persona::Persona(string Nombre, string Apellido, TipoGenero Genero){
    this->Nombre = Nombre;
    this->Apellido = Apellido;
    this->Genero = Genero;
}

string Persona::obtenerNombre(){
    return Nombre;
}

Persona::TipoGenero Persona::obtenerGenero(){
    return Genero;
}