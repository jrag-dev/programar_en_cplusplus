
#include <iostream>
#include <ostream>

int main() {
  int x = 1;

  while (x <= 10) {
    std::cout << "X: " << x++ << std::endl;
  }
}
