#include <iostream>
#include <string>
#include "Pila.hpp"
#include "MiClase.hpp"
using namespace std;

template <typename T>
void Tipo(string tipo_variable,T tamano_pila){
    Pila<T> pilaTipo;
    const size_t tamano_tipo = tamano_pila;
    int intValor = 1;
    double doubleValor = 1.1;
    Pila<MiClase> mcPila;
    Pila <string> stringPila;
    cout << "\n-- > Insertar elementos en " <<  tipo_variable<< "Pila\n";
    for(size_t i = 0; i < tamano_tipo; ++i){
        if(tipo_variable == "int"){
            pilaTipo.insertar( intValor );
            cout << intValor++ << ' ';
        } else if(tipo_variable == "double"){
            pilaTipo.insertar( doubleValor);
            cout << doubleValor << ' ';
            doubleValor+= 1.1;
        } else if(tipo_variable == "string"){
            
            string stringTemp = "C++" + to_string(i);
            stringPila.insertar(stringTemp);
            cout << stringTemp << ' ';

        } else if(tipo_variable == "mc"){
            string stringTemp = "MC" + to_string(i);
            MiClase mcTemp(stringTemp);
            mcPila.insertar(mcTemp);
            cout << stringTemp << ' ';
        }
    }
    cout << "\n<-- Extraer elementos de " << tipo_variable<<"Pila\n";
    if(tipo_variable == "string"){
        while(!stringPila.estaVacia()){
            cout << stringPila.arriba() << ' ';
            stringPila.extraer();
        }
    } else if(tipo_variable == "mc"){
        while(!mcPila.estaVacia()) {
            cout << mcPila.arriba() << ' ';
            mcPila.extraer();
        }
    } else {
        while(!pilaTipo.estaVacia()){
            cout << pilaTipo.arriba() << ' ';
            pilaTipo.extraer();
        }
    }
}