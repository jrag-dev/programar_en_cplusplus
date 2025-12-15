/* 
 * Implementar el algoritmo de Euclides que encuentr a el máximo común divisor de dos númer os enteros y positivos.
 *
 *    date            Programmer
 * 14/12/2025       Jose Alvarado
*/

#include <iostream>
#include <limits>


int get_integer_number(std::string variable);
int mcd(int a, int b);
void show_mcd(int a_original, int b_original, int mcd_result);


int main(int argc, char *argv[])
{
  int a;
  int b;
  int mcd_result;

  // call to get number;
  a = get_integer_number("a");
  b = get_integer_number("b");

  // call to mcd
  mcd_result = mcd(a, b);

  // call to show mcd
  show_mcd(a, b, mcd_result);
  
  return 0;
}


int get_integer_number(std::string variable) {
 int num; 
 std::cout << "Enter the value for " << variable << ": " << std::endl;
  do {
    if (!(std::cin >> num)) {
      std::cout << "Error: input invalid. The input must to be a number.\n" << std::endl;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    if (num <= 0) {
      std::cout << "\nThe number must to be positive integer. Try again." << std::endl;
    }
  } while (num <= 0);
 return num; 
}

int mcd(int a, int b) {
  int resto;

  while (b != 0) {
    // find the resto
    resto = a % b;

    // asign a to b
    a = b;

    // asign resto to b
    b = resto;
  }
  return a;
}

void show_mcd(int a_original, int b_original, int mcd_result) {
  std::cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
  std::cout << "!! El MCD de: " << a_original << " y " << b_original << " es: " << mcd_result << std::endl;
  std::cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" << std::endl;
}
