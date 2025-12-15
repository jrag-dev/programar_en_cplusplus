/*
 * Escriba un programa que calcule y visualice 1 + 2 + 3 + ... + (n + 1) + n,
 * donde n es un valor de un dato positivo.
 *
 */

#include <iostream>
#include <ostream>

int get_n();
int calculate_sum(int n);
void show_result(int n, int suma);

int main(int argc, char *argv[]) {

  int n;
  int suma = 0;

  // call to get number integer -> get_n
  n = get_n();

  // call to calculate sum
  suma = calculate_sum(n);

  // call to show result
  show_result(n, suma);

  return 0;
}

int get_n() {
  int n;

  do {
    std::cout << "\n+ Introduzca el valor de n (entero positivo): ";
    std::cin >> n;

    if (n <= 0) {
      std::cout << "\n! ERROR: n debe ser un valor positivo. Intente de nuevo.\n" << std::endl;
    }
  } while (n <= 0);

  return n;
}

int calculate_sum(int n) {
  int temp_suma = 0;

  int i = 1;
  while (i <= n) {
    temp_suma += i;
    i++;
  }

  return temp_suma;
}

void show_result(int n, int suma) {
  std::cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++"
            << std::endl;
  std::cout << "+\t\t\t\t\t\t\t+" << std::endl;
  std::cout << "+ El calculo de sumatoria 1 + 2 + 3 + ... + (n+1) + n\t+"
            << std::endl;
  std::cout << "+\t\t\t\t\t\t\t+" << std::endl;
  std::cout << "+ Para n = " << n << "\t\t\t\t\t\t+ \n+ Suma = " << suma
            << "\t\t\t\t\t\t+" << std::endl;
  std::cout << "+\t\t\t\t\t\t\t+" << std::endl;
  std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++"
            << std::endl;
}
