

#include <iostream>
#include <ostream>
int main(int argc, char *argv[]) {
  const int n = 5;
  const int m = 3;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      std::cout << " *";
    }
  }
  std::cout << "\n" << std::endl;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      // std::cout << i << " - " << j << std::endl;
      std::cout << " *";
    }
    std::cout << std::endl;
  }
  std::cout << "\n" << std::endl;

  for (int i = n; i > 0; i--) {
    for (int j = m; j > 0; j--) {
      // std::cout << i << " - " << j << std::endl;
      std::cout << " * ";
    }
    std::cout << std::endl;
  }
  std::cout << "\n" << std::endl;

  for (int i = 0; i < n; i++) {
    for (int j = n - i; j > 0; j--) {
      // std::cout << i << " - " << j << std::endl;
      std::cout << " *";
    }
    std::cout << std::endl;
  }
  std::cout << "\n" << std::endl;
}
