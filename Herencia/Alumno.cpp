#include "Alumno.hpp"
#include "Persona.hpp"

Alumno::Alumno(string Nombre,string Apellido, Persona::TipoGenero Genero, string NumeroCuenta):Persona(Nombre,Apellido,Genero){

    this->NumeroCuenta = NumeroCuenta;
}

string Alumno::obtenerNumero(){
    return NumeroCuenta;
}