

#include <cmath>
#include <cstdlib>
#include <iostream>
#include <ostream>
int main(int argc, char *argv[]) {
  float n;

  std::cout << "n \t\t sqrt(n)" << std::endl;

  for (n = 16; n >= 0; n = n - 2.5) {
    std::cout << n << "\t\t" << sqrtf(n) << std::endl;
  }

  return EXIT_SUCCESS;
}
