#include <cmath>
#include <iostream>
using namespace std;

int main() {
  // diccionario de datos
  const double PI = 3.14159;
  double r;    // radio
  double d;    // diámetro
  double c;    // circunferencia del circulo
  double area; // área del circulo

  // solicitar datos al usuario
  cout << "Ingresar el radio del circulo: ";
  cin >> r;

  // calculos
  d = r * (2.0);
  c = 2 * (PI) * (r);
  area = PI * (pow(r, 2));

  // Mostrar resultados
  cout << "\n-------------- Resultados --------------\n";
  cout << "Diámetro: " << d << " metros\n";
  cout << "Circunferencia: " << c << " metros\n";
  cout << "Área: " << area << " metros cuadrados\n";

  return 0;
}
