/*
 * Sobrecarga de funciones
*/

#include<iostream>
using namespace std;


int sobrecarga(int);
int sobrecarga(int, int);
float sobrecarga(float, float);
float sobrecarga(float, float, float);


int main(int argc, char *argv[])
{
  int x = 4, y = 5;
  float a = 6.0, b = 7.0, c = 9.0;

  cout << "\n El cuadrado de " << x << " es : " << sobrecarga(x) << endl;
  cout << "\n El producto de " << x << " por " << y << " es: " << sobrecarga(x, y) << endl;
  cout << "\n La suma de " << a <<  " y " << b << " es : " << sobrecarga(a, b) << endl;
  cout << "\n El promedio de " << a << ", " << b << " y " << c << " es : " << sobrecarga(a, b, c) << endl;
  
  return 0;
}

// Sobrecarga. calcula el cuadrado de un valor entero
int sobrecarga(int valor) {
  return (valor * valor);
}

// Sobrecarga. multiplica dos valores enteros
int sobrecarga(int valor1, int valor2) {
  return (valor1 * valor2);
}

// Sobrecarga. calcula la suma de dos valores reales
float sobrecarga(float valor1, float valor2) {
  return (valor1 + valor2);
}

// Sobrecarga. calcula la media de tres valores reales
float sobrecarga(float valor1, float valor2, float valor3) {
  return (valor1 + valor2 + valor3)/3.0;
}
