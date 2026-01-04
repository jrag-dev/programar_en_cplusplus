#include <iostream>
using namespace std;

void leer_real(void) {
  extern float f;           // variable definida en otro archivo (ex_6.17_extern2.cpp)
  cout << " Introduzca el dato: ";
  cin >> f;
}

void escribir_real(void) {
  extern float f;
  cout << "La variable es: " << f << endl;
}
