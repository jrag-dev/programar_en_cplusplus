

#include <cstdlib>
#include <iostream>
#include <ostream>
int main(int argc, char *argv[]) {
  std::cout << "n \tn*n \tn*n*n" << std::endl;

  for (int n = 1; n <= 5; n++) {
    std::cout << n << "\t" << n * n << "\t" << n * n * n << std::endl;
  }

  return EXIT_SUCCESS;
}
