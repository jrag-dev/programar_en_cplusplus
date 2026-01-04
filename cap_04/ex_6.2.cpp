#include <iostream>


int min(int x, int y) {
  if (x < y) {
    return x;
  } else {
    return y;
  }
}

int main(int argc, char *argv[])
{
  int m, n;

  do {
    std::cout << "Introduzca dos números. Si primero es cero fin ";
    std::cin >> m >> n;
    if (m != 0) {
      std::cout << "\nEl menor es: " << min(m, n) << std::endl;
    }
  } while (m != 0);

  return 0;
}
