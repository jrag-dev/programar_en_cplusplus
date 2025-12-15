/*
 * Un número perfecto es un entero positivo, que es igual a la suma de todos los enteros positivos 
 * (excluido el mismo) que son divisores del número. El primer númer o perfecto es 6, ya que los 
 * divisor es estrictos de 6 son 1, 2, 3 y 1 + 2 + 3 = 6. Escribir un programa que lea un número 
 * entero positivo tope y escriba todos los números perfectos menores o iguales que él.
 *
 *       Date                Programmer              Email
 *    15/12/2025            Jose Alvarado       josealvarado2117@gmail.com
*/

#include <iostream>
#include <limits>


int get_positive_integer();
void show_perfect_numbers(int num);

int main(int argc, char *argv[])
{
  long tope;
  int count = 0;

  tope = get_positive_integer();

  
  long j = 1;
  while (j <= tope) {
    long suma = (j == 1) ? 0 : 1;
    for (long i = 2; (i*i) <= j; i++) {
      if (j % i == 0) {
        suma += i;

        long d = j / i;

        if (i != d) {
          suma += d;
        }
        //std::cout << "j: " << j << "\ti: " << i << "\tsuma: " << suma << std::endl;
      }
    }
    if (j == suma) {
      count++;
      std::cout << count << ". Número perfecto: " << j << std::endl;
    }
    j++;
  }
  
  return 0;
}


int get_positive_integer() {
  int tope;
  std::cout << "\n**** Introduzca el entero positivo tope *****\n" << std::endl;
  do {
    if (!(std::cin >> tope)) {
      std::cout << "\nError: Entrada inválida. Debe ser un entero positivo.\n" << std::endl;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      tope = 0;
    }

    if (tope <= 0) {
      std::cout << "\nError: El tope debe ser mayor que 0. Intente de nuevo.\n" << std::endl;
    }
  } while (tope <= 0);
  
  return tope;
}
