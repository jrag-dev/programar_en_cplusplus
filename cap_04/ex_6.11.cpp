/*
 * La función asteriscos tiene tr es parámetros. El primero indica el número de filas, el segundo 
 * indica el número de columnas y el tercero el carácter a escribir. El segundo y el tercer 
 * parámetros son por omisión.
*/

#include <iostream>

void asteriscos(int fila, int col = 3, char c = '*') {
  for (int i = 0; i < fila; i++) {
    for (int j = 0; j < col; j++) {
      std::cout << c;
    }
    std::cout << std::endl;
  }
}


int main(int argc, char *argv[])
{
  asteriscos(4);
  std::cout << std::endl;
  asteriscos(4,6);
  std::cout << std::endl;
  asteriscos(4, 6, '@');

  return 0;
}
