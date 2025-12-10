

#include <cmath>
#include <cstdlib>
#include <iostream>
#include <ostream>
int main(int argc, char *argv[]) {
  double suma = 0.0f;
  int c = 0;
  int vmax;
  const double PI = 4.0 * atan(1.0);
  const double tolerancia = 0.0000001;

  std::cout << "Cuantos términos sumo de la serie? ";
  std::cin >> vmax;

  for (c = 1; c <= vmax; c++) {
    if (c == vmax) {
      std::cout << "VMAX alcanzado!\n" << std::endl;
      break;
    }

    double abs_tol = fabs((suma - (PI * PI / 6.0)));
    std::cout << "Tolerancia alcanzada: " << abs_tol << ", pi = " << PI
              << std::endl;
    if (abs_tol < tolerancia) {
      std::cout << "Tolerancia alcanzada: " << abs_tol << ", pi = " << PI
                << std::endl;
      break;
    }
    suma += (1.0 / (double)(c * c));
    std::cout << "suma para c: " << c << " = " << suma << std::endl;
  }

  std::cout << "Suma: " << suma << std::endl;
}
