

#include <cstdlib>
#include <iostream>
int main(int argc, char *argv[]) {
  int suma = 0, n = 11;

  while (n <= 50) {
    suma = suma + n;
    n++;
  }
  std::cout << "Suma: " << suma << std::endl;

  return EXIT_SUCCESS;
}
