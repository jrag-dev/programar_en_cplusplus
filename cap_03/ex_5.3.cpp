

#include <cstdlib>
#include <iostream>
#include <ostream>

int main(int argc, char *argv[]) {
  float suma = 0.0f, n = 1.0f;

  while (n <= 10) {
    suma += 1 / n;
    n++;
  }

  std::cout << "Suma: " << suma << std::endl;

  return EXIT_SUCCESS;
}
