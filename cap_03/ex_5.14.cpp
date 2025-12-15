

#include <iostream>
#include <ostream>
int main(int argc, char *argv[]) {
  int n, m;

  for (n = 1; n <= 10; n++) {
    std::cout << "Tabla de multiplicar del " << n << std::endl;
    for (m = 10; m >= 1; m--) {
      std::cout << n << " veces " << m << " = " << n * m << std::endl;
    }
  }

  return 0;
}
