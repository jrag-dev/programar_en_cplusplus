

#include <iostream>
#include <ostream>
int main(int argc, char *argv[]) {
  const int N_MAX = 10;
  const int M_MAX = 100;

  int i = 1;
  while (i * i < N_MAX) {
    int j = i;
    while (j * j < M_MAX) {
      std::cout << i + j << " ";
      j *= 2;
    }
    i++;
    std::cout << std::endl;
  }

  std::cout << "\n*****\n";

  return 0;
}
