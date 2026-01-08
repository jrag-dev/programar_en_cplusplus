/*
 * Escribir una función que tenga como parámetro dos números enteros positivos num1 y num2, y 
 * calcule el resto de la división entera del mayor de ellos entre el menor mediante 
 * suma y r estas.
 *
 * Requerimientos:
 *  - Los números deben ser enteros positivos
 *  - No usar operadores / o %
 *
 * Date: 05-01-2026
 * Programmer: Jose Alvarado
 * version: 1.0
 * Github: https://github.com/jrag-dev
*/

#include <iostream>
#include <limits>
#include <cmath>


int get_number();
void get_greater_less(int num1, int num2, int& gr, int& le);
void get_remainder(int gr, int le, int& remainder);
void print_response(int gr, int le, int remainder);

int main(int argc, char *argv[])
{
  int num1;
  int num2;
  int num_greater;
  int num_less;
  int remainder = 0;

  num1 = get_number();
  num2 = get_number();

  std::cout << std::endl;
  

  get_greater_less(num1, num2, num_greater, num_less);
  
  get_remainder(num_greater, num_less, remainder);

  print_response(num_greater, num_less, remainder);
  
  return 0;
}


int get_number()
{
  int num;
  do {
    std::cout << "Enter a number: ";

    if (!(std::cin >> num)) {
      std::cout << "\nError: the number must to be an integer. Please try again." << std::endl;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      num = -1;
    }

    if (num > 0) {
      return num;
    }
  } while (num < 0);

  return num;
}

void get_greater_less(int num1, int num2, int& gr, int& le)
{
  if (num1 > num2) {
    gr = num1;
    le = num2;
  } else {
    gr = num2;
    le = num1;
  }
}

void get_remainder(int gr, int le, int& remainder)
{
  if (le == 0) {
    std::cerr << "Error: Division by zero is undefined." << std::endl;
    remainder = -1; // significa código de error
    return;
  } 

  remainder = abs(gr);
  int divisor = abs(le);

  while (remainder >= divisor) {
    remainder = remainder - divisor;
  }
}

void print_response(int gr, int le, int remainder)
{ 
  std::cout << "greater: " << gr << std::endl;
  std::cout << "less: " << le << std::endl;

  if (remainder != -1) {
    std::cout << "Remainder: " << remainder << std::endl << std::endl;
  } else {
    std::cout << "Could not calculate remainder due to error." << std::endl << std::endl;
  }
}
