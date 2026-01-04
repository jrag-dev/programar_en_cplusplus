/*
 * Paso de parámetros por referencia a una función, estilo C.
*/

#include <iostream>
#include <cstdlib>
using namespace std;


void intercambio(int* x, int* y) {
  int aux = *x;
  *x = *y;
  *y = aux;
}

int main(int argc, char *argv[])
{
  int x = 20, y = 30;

  cout << "antes de la llamada: ";
  cout << " x = " << x << " y = " << y << endl;
  intercambio(&x, &y);
  cout << "después de la llamada: ";
  cout << " x = " << x << " y = " << y << endl;
  
  return 0;
}

