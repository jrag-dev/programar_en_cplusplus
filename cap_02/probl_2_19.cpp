#include <iostream>
using namespace std;

int main() {
  int num1;
  int num2;
  int num3;
  double suma;
  double promedio;
  int producto;
  int menor;
  int mayor;

  // Entrada de datos
  cout << "Ingrese el primer entero: ";
  cin >> num1;

  cout << "Ingrese el segundo entero: ";
  cin >> num2;

  cout << "Ingrese el tercer entero: ";
  cin >> num3;

  // Calculos y comparaciones
  suma = num1 + num2 + num3;

  producto = (num1 * num2) * num3;

  promedio = (suma) / (3.0);

  mayor = num1;
  menor = num1;
  if (num2 > mayor) {
    mayor = num2;
  }

  if (num3 > mayor) {
    mayor = num3;
  }

  if (num2 < menor) {
    menor = num2;
  }

  if (num3 < menor) {
    menor = num3;
  }

  // Mostrar resultados
  cout << "\n************ Resultados *************\n";
  cout << "Suma: " << suma << "\n";
  cout << "Producto: " << producto << "\n";
  cout << "Promedio: " << promedio << "\n";
  cout << "Menor: " << menor << "\n";
  cout << "Mayor: " << mayor << "\n";
}
