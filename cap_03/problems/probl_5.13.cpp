/*
 * Calcular todos los números de exactamente tres cifras tales que la suma de los cuadrados 
 * de sus dígitos es igual al cociente de la división entera del número entre 3.
 *
 *       Date                Programmer              Email
 *    14/12/2025            Jose Alvarado       josealvarado2117@gmail.com
*/

#include <iostream>

int main(int argc, char *argv[])
{
  int n1, n2, n3;
  int counter = 0;
  

  int num, square, d_integer;
  for (int k = 100; k < 1000; k++) {
    num = k;

    n1 = num % 10;  // unidades
    num = num / 10;
    n2 = num % 10;  // decenas
    num = num / 10;
    n3 = num % 10;  // centenas

    square = (n1*n1) + (n2*n2) + (n3*n3);
    d_integer = k / 3;

    if (square == d_integer) {
      counter++;
      std::cout << counter << ". " << k << std::endl;
    }
  }
  
  return 0;
}
