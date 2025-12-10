/*
 * Bucle que escribe las letras mayúsculas del alfabeto. Se inicializa la
 * variable carácter car a 'A', y mediante un bucle do while que termina cuando
 * en car hay un carácter mayor que 'Z', se itera escribiendo el valor de car e
 * incrementando el valor de car en una unidad por lo que car toma el siguiente
 * carácter del código ASCII.
 *
 */

#include <iostream>
#include <ostream>

int main(int argc, char *argv[]) {
  char character_initial = 'A';

  std::cout << "\n" << std::endl;

  do {
    std::cout << character_initial << ' ';
    character_initial++;
  } while (character_initial <= 'Y');

  std::cout << "\n" << std::endl;

  return 0;
}
