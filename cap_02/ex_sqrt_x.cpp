/**
 * @file probl_2_30.cpp
 * @brief Implementación para calcular las raices de una ecuación
 *        cuadratica de la forma ax**2 + bx + c = 0
 * @author José Alvarado
 * @date 2025-12-01 - 11:50 pm
 */

#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;

/* function than return the descriminant for this equation */
double determinant(double a, double b, double c) {
  double d;

  d = pow(b, 2) - (4 * a * c);

  return d;
}

int main() {
  double a;  // coefficient of x**2
  double b;  // coefficient of x
  double c;  // independient termin
  double d;  // determinant
  double x1; // first solution for x
  double x2; // second solution for x
  double xr; // real termin
  double xi; // imaginario termin

  // Prompt the user by a, b and c;
  cout << "\nEnter the coefficient a: ";
  cin >> a;

  cout << "Enter the coefficient b: ";
  cin >> b;

  cout << "Enter the coefficient c: ";
  cin >> c;

  // We prove to have a cuadratic equation
  if (a == 0) {
    cout << "\nWe don't a cuadratic equation";

    return 1;
  }

  // call to determinant
  d = determinant(a, b, c);

  xr = -b / (2.0 * a);

  if (d > 0) {
    cout << "\nWe have two reales roots!" << endl;

    xi = sqrt(d) / (2.0 * a);

    x1 = xr + xi;
    x2 = xr - xi;

    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
  } else if (d < 0) {
    cout << "\nWe have two complej roots!" << endl;

    xi = sqrt(abs(d)) / (2.0 * a);

    cout << "x1 = " << xr << " + " << xi << " i" << endl;
    cout << "x2 = " << xr << " - " << xi << " i" << endl;
  } else {
    cout << "\nWe have two identical roots!" << endl;

    xr = -b / (2.0 * a);
    x1 = xr;
    x2 = x1;

    cout << "d = " << d << endl;

    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
  }

  return 0;
}
