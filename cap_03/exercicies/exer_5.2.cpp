

#include <iostream>
#include <ostream>
int main(int argc, char *argv[]) {

  for (int n = 10; n > 0; n = n - 2) {
    std::cout << "Hola ";
    std::cout << n << std::endl;
  }

  double m = 0;
  for (double k = 2; k > 0; k = k - 0.5) {
    std::cout << m++ << std::endl;
  }
}
