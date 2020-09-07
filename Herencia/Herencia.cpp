#include <iostream>
#include "Persona.hpp"
#include "Maestro.hpp"
#include "Alumno.hpp"
using namespace std;

int main(){
    Persona p("Martin","Cuellar", Persona::TipoGenero::MASCULINO);
    cout << p.obtenerNombre() << "(";
    cout << (p.obtenerGenero() == 0 ? "Hombre" : "Mujer") << ")" << endl;//x
    Maestro m("Martin", "Cuellar", Persona::TipoGenero::MASCULINO, "12345");
    cout << m.obtenerNombre() << " #" << m.obtenerNumero() <<  " (";
    cout << (m.obtenerGenero() == Persona::TipoGenero:: MASCULINO ? "Hombre" : "Mujer") << ")" << endl;
    Alumno a("Gabriel", "Vasquez", Persona::TipoGenero::MASCULINO, "67890");
    cout << a.obtenerNombre() << " # " << a.obtenerNumero() << endl;
}