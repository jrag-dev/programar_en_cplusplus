/*
 * Función que calcula y de vuelve la suma de los divisor es de un número
 * entero positivo que recibe como parámetro.
*/

int divisores(int n) {
  int i, acu;

  acu = 0;
  for (i = 1; i <=n; i++) {
    if (n % i == 0) {
      acu += i;
    }
  }
  return acu;
}

