/*
 * Generar 10 números aleatorios menores que 100 y visualiza el menor y el mayor .
 *
*/

#include <iostream>
#include <random>


int MIN(int current_min, int x);
int MAX(int current_max, int x);


int main(int argc, char *argv[])
{
  int max, min, i;
  std::random_device rd;
  std::mt19937 gen(rd());

  std::uniform_int_distribution<> dis(1, 100);

  max = min = dis(gen);

  for (i = 1; i < 10; i++) {
    int x = dis(gen);
    std::cout << "x = " << x << std::endl;
    
    min = MIN(min, x);
    max = MAX(max, x);
  } 

  std::cout << "\nMinimo: " << min << "\nMaximo: " << max << std::endl;
  
  return 0;
}


int MIN(int current_min, int x) {
  return (current_min < x ? current_min : x);
}

int MAX(int current_max, int x) {
  return (current_max > x ? current_max : x);
}
