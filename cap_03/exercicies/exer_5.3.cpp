

#include <iostream>
#include <ostream>
int main(int argc, char *argv[]) {
  int i = 1, n;

  std::cin >> n;

  while (i <= n) {
    if ((i % n) == 0) {
      i++;
    }
  }

  std::cout << i << std::endl;

  return 0;
}
