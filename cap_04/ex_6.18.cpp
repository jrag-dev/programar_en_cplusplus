/*
 * Calcula las sucesivas potencias a0 , a 1 , a 2 , ..., an, usando una variable estática f
 *
*/

#include <iostream>
#include <cstdlib>
using namespace std;


float potencia_s(float a, int n) {
  static float f = 1.0;

  f *= a;
  return f;
}

float potencia(float a, int n) {
  float f = 1.0;

  for (int i = 1; i <= n; i++) {
    f *= a;
  }
  return f;
}

int main(int argc, char *argv[])
{
  float a;
  int n;

  cout << " Ingrese el valor de a: ";
  cin >> a;

  do {
    cout << " Ingrese el valor de n: ";
    cin >> n;
  } while (n <= 0); 

  for (int i = 1; i <= n; i++) {
    cout << a << " elevado a la " << i << " = " << potencia_s(a, i) << endl;
  }
  
  return 0;
}
