

#include <iostream>
using namespace std;


long int factorial (int n);

int main(int argc, char *argv[])
{
  int valor1, valor2, i;

  do {
    cout << "Introduzca dos números positivos x < y: ";
    cin >> valor1 >> valor2;
  } while ((valor1 <= 0) || (valor2 <= 0) || (valor1 > valor2));

  for (int i = valor1; i <= valor2; i++) {
    cout << i << " factorial " << factorial(i) << endl;
  }
  
  return 0;
}


long int factorial (int n) {
  long int f;

  f = 1.0;
  for (int i = 1; i <= n; i++) {
    f = f*i;
  }
  return f;
}


