/*
 * Paso de parámetros por referencia a una función, estilo C++
*/

#include <iostream>
#include <cstdlib>
using namespace std;


void referencia(int& x) {
  x += 2;
}

int main(int argc, char *argv[])
{
  int x = 20;

  cout << " antes de la llamada: " << "x = " << x << endl;
  referencia(x);
  cout << " despues de la llamada: " << "x = " << x << endl;
  
  return 0;
}
