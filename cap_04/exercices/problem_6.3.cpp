


#include <iostream>


long functiony(int n);


int main(int argc, char *argv[])
{
  int num;

  std::cout << "Calcular el valor de la función para n = ";
  std::cin >> num;

  if (num < 0) {
    std::cout << "Error: n debe ser mayor o igual a 0." << std::endl;
  } else {
    std::cout << "Resultado: " << functiony(num) << std::endl;
  }
  
  return 0;
}


long functiony(int n)
{
  if (n <= 2) return n;

  int a = 0;
  int b = 1;
  int c = 2;
  long res = 0;

  for (int i = 3; i <= n; i++) {
    res = a + 3 * b - c;

    // Desplazamos los valores para el siguiente cálculo
    a = b;
    b = c;
    c = res;
  }

  return res;
}
