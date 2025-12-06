/**
 * @file probl_2_30.cpp
 * @brief Implementación para calcular el indice de masa corporal. Problema 2.30
 * del libro "Cómo programar en C++, 9na edición".
 * @author José Alvarado
 * @date 2025-11-30
 */

#include <iostream>
using namespace std;

int main() {
  // diccionario de datos
  int opcion;            // indica si se trabaja con libras-pulgadas ó kg-metros
  double peso_usuario;   // peso del usuario
  double altura_usuario; // altura del usuario
  double bmi;            // BMI a calcular

  // Entrada de datos
  cout << "Ingrese la unidades usadas: \n1 -> libras y pulgadas\n2 -> "
          "kilogramos y metros\n";
  cin >> opcion;

  cout << "\nIngrese el peso del usuario: ";
  cin >> peso_usuario;
  cout << "\nIngrese la altura del usuario: ";
  cin >> altura_usuario;

  // Calculos
  if (opcion == 1) {
    bmi = (peso_usuario * 703) / (altura_usuario * altura_usuario);
  } else if (opcion == 2) {
    bmi = peso_usuario / (altura_usuario * altura_usuario);
  } else {
    // manejo de opcion no válida
    cout << "\nError: Opción de unidades no válida. El BMI no pudo ser "
            "calculado."
         << endl;
    return 1;
  }

  // mostrar resultados
  cout << "\n------------------------------------------------" << endl;
  cout << "\nTú BMI es: " << bmi << endl;
  cout << "\n------------------------------------------------" << endl;

  cout << "\nVALORES DE BMI" << endl;
  cout << "Bajo peso: \t menos de 18.5" << endl;
  cout << "Normal: \t entre 18.5 y 24.9" << endl;
  cout << "Sobrepeso: \t entre 25 y 29.9" << endl;
  cout << "Obeso: \t\t 30 o más" << endl;

  return 0;
}
