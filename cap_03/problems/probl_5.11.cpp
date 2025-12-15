/* 
 * Escribir un programa que calcule y visualice el más gr ande, el más pequeño y la media de n númer os (n > 0).
 *
 *      Date            Programmer                Email:
 *   i14/12/2025      Jose Alvarado     josealvarado2117@gmail.com
*/

#include <iostream>
#include <limits>


int get_nmax();
double calculate_average(int num_of_elements, double suma);
void show_results(double bigger, double smaller, double average);


int main(int argc, char *argv[])
{
  int counter = 1;
  int num_of_elements;
  int n_max;
  double num;
  double bigger = -9999999.0;
  double smaller = 9999999.0;
  double suma = 0.0;
  double average;

  // call to get_nmax
  n_max = get_nmax();

  std::cout << "\n**** Captura de datos de entrada de " << n_max << " enteros *****\n" << std::endl;
  do {
    std::cout << "Ingrese el número " << counter << ": ";
    if (!(std::cin >> num)) {
      std::cout << "\nError: Entrada inválida. Debe ser un entero positivo.\n" << std::endl;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      return -1;
    } else {
      if (bigger < num) {
        bigger = num;
      }

      if (smaller > num) {
        smaller = num;
      }

      suma += num;
      counter++;
    }
  } while (counter <= n_max);

  // num_of_elements
  num_of_elements = counter - 1;

  // call to calculate_average
  average = calculate_average(num_of_elements, suma);

  show_results(bigger, smaller, average);
  
  return 0;
}



int get_nmax() {
  int n_elements;
  std::cout << "\n**** Introduzca la cantidad de enteros N_MAX *****\n" << std::endl;
  do {
    if (!(std::cin >> n_elements)) {
      std::cout << "\nError: Entrada inválida. Debe ser un entero positivo.\n" << std::endl;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      return -1;
    }

    if (n_elements <= 0) {
      std::cout << "\nError: La cantidad de elementos N_MAX debe ser mayor que 0. Intente de nuevo.\n" << std::endl;
    }
  } while (n_elements <= 0);
  
  return n_elements;
}

double calculate_average(int num_of_elements, double suma) {
  double average;
  std::cout << "suma: " << suma << "\nnum_of_elementos: " << num_of_elements << std::endl;

  average = suma / ((double) num_of_elements);

  return average;
}

void show_results(double bigger, double smaller, double average) {
  std::cout << "\n- El número más grande es: " << bigger << std::endl;
  std::cout << "- El número más pequeño es: " << smaller << std::endl;
  std::cout << "- El promedio es: " << average << std::endl;
  std::cout << std::endl;
}
