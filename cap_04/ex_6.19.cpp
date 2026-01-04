/*
 * Calcula la funcionx con variables estáticas. La funcionx se define de la siguiente 
 * forma: funcionx(0) = 0, funcionx(1) = 1 funcionx(2) = 2 
 * funcionx(n) = funcionx(n–3)+ 2*funcionx(n–2)+funcionx(n–1) si n > 2.
 *
*/


#include <iostream>
#include <cstdlib>
using namespace std;

int resto(int n, int m);

long int funcion_x();

int main(int argc, char *argv[])
{
  int n, i;

  cout << " valor n de la funcion(x)? ";
  cin >> n;

  cout << " Secuencia de la funcion(x): 0, 1, 2 ";
  for (i = 3; i <= n; i++) {
    cout << ", " << funcion_x();
  }
  cout << endl;
  
  return 0;
}


long int funcion_x() {
  static int x = 0, y = 1, z = 2;
  int aux;

  aux = x + 2*y + z;
  x = y;
  y = z;
  z = aux;

  return z;
}
