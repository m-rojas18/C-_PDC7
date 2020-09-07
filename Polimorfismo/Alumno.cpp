#include <iostream>
#include "Alumno.hpp"
#include "Persona.hpp"

Alumno::Alumno(string Nombre, string Apellido, string NumeroCuenta, 
              double Mesada):Persona(Nombre,Apellido) {
    this->NumeroCuenta = NumeroCuenta;
    this->Mesada = Mesada;
}

string Alumno::obtenerNumero() {return NumeroCuenta;}
double Alumno::ingresos() const {return Mesada;}

void Alumno::imprimir() const {
    cout << "Alumno con mesada: ";
    Persona::imprimir();
    cout << " | Mesada: " << Mesada << endl;
}