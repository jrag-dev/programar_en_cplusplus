/* 
 * Escribir y ejecutar un programa que invierta los dígitos de un entero positivo dado leído del teclado .
 *
 * Date: 13 / 12/ 2025
 * Programmer: Jose Alvarado
*/
#include <iostream>
#include <limits>


int invertir_entero(int n) {
  int invertido = 0;

  while (n > 0) {
    int digito = n % 10;
    invertido = (invertido * 10) + digito;
    n = n / 10;
  }

  return invertido;
}

void show_invertido(int invertido) {
  std::cout << "\ninvertido: " << invertido << std::endl; 
}

int main(int argc, char *argv[])
{
  int invertido = 0;
  int n;

  std::cout << "\nIntroduzca un entero: " << std::endl;
  do {
    if (!(std::cin >> n)) {
      std::cout << "\nError: el valor debe ser un número entero." << std::endl;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    if (n <= 0) {
      std::cout << "\nError: El valor debe ser un número positivo. Intente nuevamente!" << std::endl;
    }
  } while ( n <= 0 );

  // call to invertir_entero
  invertido = invertir_entero(n);

  // call to show_invertido
  show_invertido(invertido);
  
  return 0;
}


