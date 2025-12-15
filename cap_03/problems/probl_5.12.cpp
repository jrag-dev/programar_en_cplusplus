/*
 * Encontrar un número natural n más pequeño tal que la suma de los n primer os términos de la 
 * serie Σ (i=1 to n) i * i – i – 2 exceda de una cantidad introducida por el teclado máximo.
 *
 *       Date                Programmer              Email
 *    14/12/2025            Jose Alvarado       josealvarado2117@gmail.com
*/

#include <iostream>
#include <limits>

int get_quantity();

int main(int argc, char *argv[])
{
  int quantity;
  int smaller;
  int sumatoria = 0;

  quantity = get_quantity();

  // call to calculate_smaller
  int k = 0;
  while (sumatoria <= quantity) {
    k++;
    sumatoria += (k*k) -k -2;
    
    std::cout << "sumatoria: " << sumatoria << std::endl;
    std::cout << "k: " << k << std::endl;

    if (sumatoria > quantity) {
      break;
    }
  }
  smaller = k;
  
  std::cout << "smaller " << smaller << std::endl;
  
  return 0;
}


int get_quantity() {
  int q;
  std::cout << "\n**** Introduzca la cantidad quantity *****\n" << std::endl;
  do {
    if (!(std::cin >> q)) {
      std::cout << "\nError: Entrada inválida. Debe ser un entero positivo.\n" << std::endl;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      q = 0;
    }

    if (q <= 0) {
      std::cout << "\nError: La cantidad debe ser mayor que 0. Intente de nuevo.\n" << std::endl;
    }
  } while (q <= 0);
  
  return q;
}
