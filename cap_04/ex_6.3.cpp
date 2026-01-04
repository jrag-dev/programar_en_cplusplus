#include <iostream>
#include <cmath>

float calculate_norma(float x, float y, float z) {
  return sqrt((x*x) + (y*y) + (z*z));
}


int main(int argc, char *argv[])
{
  float x, y, z;

  std::cout << "\nvector: (" << 3 << "," << 4 << "," << 5 << ")";
  std::cout << "\nnorma = " << calculate_norma(3, 4, 5) << std::endl;
  std::cin >> x >> y >> z;
  std::cout << "\nvector: (" << x << "," << y << "," << z << ")" << std::endl;
  std::cout << "norma = " << calculate_norma(x, y, z) << std::endl;
  
  return 0;
}
