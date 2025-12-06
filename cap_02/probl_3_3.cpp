/**
 * @file ex_conversion.cpp
 * @brief Implementación de un programa lee el número de segundos y realiza las
 * conversiones, teniendo en cuenta que una semana tiene 7 días, un día tiene 24
 * horas, una hora 60 minutos, y un minuto 60 segundo
 *
 * @author José Alvarado
 * @date 2025-11-02
 */

#include <iostream>
using namespace std;

int main() {
  float a, b, c, d, e, f;
  float x, y;
  float denominador;

  // Prompt the user by the input values
  cout << "Enter the values of a, b, c: ";
  cin >> a >> b >> c;

  cout << "Enter the values of d, e, f: ";
  cin >> d >> e >> f;

  // define the denominador
  denominador = a * e - b * d;

  if (denominador == 0) {
    cout << "The system of equation haven't solution";
  } else {
    x = (c * e - b * f) / denominador;
    y = (a * f - d * c) / denominador;
    cout << "The solution of system is: " << endl;
    cout << "x = " << x << ", y = " << y << endl;
  }

  return 0;
}
