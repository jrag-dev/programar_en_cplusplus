/*
 * Leer las notas de un alumno usando como valor centinela par a la entrada de
 * notas el valor de –1. Se define una constante entera centinela con el valor
 * de –1. En la variable nota se leen los datos de la entr ada. La variable
 * contador cuenta el número total de notas intr oducidas, y el acumulador suma
 * contiene la suma total de las notas introducidas. El bucle while está
 * controlado por el valor de centinela. En cada iteración se incrementa el
 * contador de en una unidad, se lee una nueva nota y se acumula en suma.
 * Obsérvese que la variable contador, siempre contiene una unidad menos del
 * número de datos que han sido intr oducidos.
 *
 * programmer:: Jose Alvarado
 *
 * @2025-12-09
 */

#include <iostream>
#include <ostream>
int main(int argc, char *argv[]) {
  const int centinela = -1;
  float nota, suma = 0;
  float contador = 0;

  std::cout << "Introduzca la siguiente nota (-1 para terminar): ";
  std::cin >> nota;

  while (nota != centinela) {
    contador++;
    suma += nota;
    std::cout << "Introduzca la siguiente nota (-1 para terminar): ";
    std::cin >> nota;
  }

  if (contador > 0) {
    std::cout << "media = " << suma / contador << std::endl;
  } else {
    std::cout << "no hay notas." << std::endl;
  }
}
