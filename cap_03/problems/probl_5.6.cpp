#include <iostream>


int main(int argc, char *argv[])
{
  const int m = 30;
  int suma = 0;
  int contador = 0;


  int k = 1;
  while (contador < m) {
    if (k % 2 == 0) {
      suma += k;
      contador++;
    }
    k++;
  }

  std::cout << "\nm: " << m << "\ncontador: " << contador << "\nk: " << k << std::endl;
  std::cout << "suma: " << suma << std::endl;
  
  return 0;
}
