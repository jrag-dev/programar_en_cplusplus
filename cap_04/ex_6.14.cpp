#include <iostream>

using namespace std;

const float Pi = 3.141592;

float longitud(float r) { return Pi * r; }

float area(float r) { return (Pi * r * r); }

int main(int argc, char *argv[]) {
  float radio;

  do {
    cout << "Introduzca el radio del circulo (positivo): ";
    cin >> radio;

  } while (radio <= 0);

  cout << " La longitud de la circunferencia es: ";
  cout << longitud(radio) << endl;
  cout << " El área del circulo es: " << area(radio) << endl;

  return 0;
}
