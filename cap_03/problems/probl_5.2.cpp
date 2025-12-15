
#include <iostream>

int main(int argc, char *argv[])
{
  const int N_MAX = 7;

  for (int i = 0; i < N_MAX; i++) {
    if (i < (N_MAX + 1) / 2) {
      for (int j = 0; j <= i; j++) {
        std::cout << (j+1) << "\t";
      }
    } else {
      for (int j = (N_MAX - 1) - i ; j >= 0; j--) {
        std::cout << ((N_MAX ) -i -j) << "\t";
      }
    }
    std::cout << std::endl;
  }
  

  return 0;
}
