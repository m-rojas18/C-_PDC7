#include <iostream>
#include "Persona.hpp"
#include "Maestro.hpp"
#include "Alumno.hpp"
#include <vector>
using namespace std;

int main(){
    Maestro m("Martin", "Cuella", "12345", 1500);
    m.imprimir();
    Alumno a("Gabriel", "Vasquez", "67890", 1000);
    a.imprimir();
    vector < Persona* > personas(2);
    personas[0] = dynamic_cast<Persona*> (&m);
    personas[1] = dynamic_cast<Persona*> (&a);

    for(Persona *personaPtr : personas) {
        cout << personaPtr->ingresos() << " -> ";
        personaPtr->imprimir();
    }
    
    return 0;
}