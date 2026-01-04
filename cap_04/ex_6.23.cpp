/*
 * Función que retorna el menor con tipos de datos genéricos
 *
*/


#include <iostream>
#include <cstdlib>
using namespace std;


template <class T>
T man(T a, T b) {
  if (a < b) {
    return a;
  } else {
    return b;
  }
}

int main(int argc, char *argv[])
{
  int x = 4, y = 5;
  float a = 6.0, b = 7.0;
  char c = 'C', d = 'A';

  cout << "\n El menor de " << x << " y " << y << " es: " << man(x, y) << endl;
  cout << "\n El menor de " << a << " y " << b << " es: " << man(a, b) << endl;
  cout << "\n El menor de " << c << " y " << d << " es: " << man(c, d) << endl;
  
  return 0;
}
