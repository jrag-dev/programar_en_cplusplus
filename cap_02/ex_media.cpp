/**
 * @file ex_media.cpp
 * @brief Implementación de una solución para calcular la media de un conjunto
 * de de números ingresados por teclado. del libro "Programación en C++, de Luis
 * Joyanes".
 * @author José Alvarado
 * @date 2025-11-02
 */

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double num = -1.0;
  int contador = 0;
  double suma = 0.0;
  double media = 0.0;

  while (true) {
    cout << "Enter the next number: ";
    cin >> num;

    if (num == 0) {
      break;
    }

    if (num > 0) {
      suma += num;
      contador++;
    } else {
      cout << "Advertencia: Sólo se deben ingresar números positivos." << endl;
    }
  }

  if (contador > 0) {
    media = suma / contador;
    cout << "Total de números introducidos: " << contador << endl;
    cout << "La media es: " << media << setprecision(2) << endl;
  } else {
    cout << "No se introdujo ningún número para calcular la media." << endl;
  }

  return 0;
}
