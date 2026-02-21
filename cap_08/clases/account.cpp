// account.cpp
// Defines methods constructor and display()
// -------------------------------------------------------------
#include "account.h"
#include <iomanip>
#include <iostream>

using namespace std;

Account::Account(const string &_name, unsigned long _nr, double _balance)
    : name(_name), nr(_nr), balance(_balance) {
  if (name.empty()) {
    name = "Desconocido"; // Valor por defecto por seguridad
    cout << "Warning: Cuenta creada sin nombre válido." << endl;
  }
}

// Implementación del destructor
Account::~Account() {
  // Aquí lebberamos memoria si usamos 'new' (punteros)
  cout << "\nDestruyendo cuenta de " << name << endl;
}

void Account::display() {
  cout << fixed << setprecision(2)
       << "----------------------------------------------------------\n"
       << "Account holder:          " << name << '\n'
       << "Account number:          " << nr << '\n'
       << "Account balance:          " << balance << '\n'
       << "----------------------------------------------------------\n"
       << endl;
}
