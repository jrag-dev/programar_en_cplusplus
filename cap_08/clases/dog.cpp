//--------------------------------------------------------------------------------\\
// dog.cpp
// Implement Dog class
//
// Developer: Jose Alvarado
// Date: 17-02-2026
//--------------------------------------------------------------------------------\\

#include "dog.h"
#include <iostream>
using namespace std;

Dog::Dog(unsigned long _id, string _name, string _color,
         unsigned long _owner_id)
    : id(_id), name(_name), color(_color), owner_id(_owner_id) {
  if (name.empty()) {
    name = "Desconocido";
    cout << "\nEl perro fue creado sin nombre válido." << endl;
  }
}

Dog::~Dog() {
  cout << "\nSe libero el espacio de " << name << endl;
}

void Dog::comer() { cout << "\nEl perro esta comiendo." << endl; }

void Dog::dormir() { cout << "\nEl perro esta durmiendo." << endl; }

void Dog::darLaPatita() { cout << "\nEl perro esta dando la patita." << endl; }

void Dog::girar() { cout << "\nEl perro esta girando." << endl; }

void Dog::ladrar() { cout << "\nEl perro esta ladrando." << endl; }
