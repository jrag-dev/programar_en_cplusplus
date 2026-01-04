/*
 * Prototipo, llamada y definición de función. La función media recibe como parámetros 
 * dos números y retorna su media aritmética
 *
*/

#include <iostream>
#include <limits>


double get_number();
double media_fn(double x1, double x2);
void show_media(double x1, double x2, double media);

int main(int argc, char *argv[])
{
  double num1, num2;
  double media;

  // call to get number
  num1 = get_number();
  num2 = get_number();

  // call to media_fn
  media = media_fn(num1, num2);

  // call to show_media
  show_media(num1, num2, media);
 
  return 0;
}


double get_number() {
  double num;
  std::cout << "Introduzca un numero: " << std::endl;
  do {
    if (!(std::cin >> num)) {
      std::cout << "\nEl valor debe ser un número. Intenta nuevamente.\n" << std::endl;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      num = 0;
    }
  } while (num <= 0);
  return num;
}

double media_fn(double x1, double x2) {
  return (x1 + x2) / 2.0;
}

void show_media(double x1, double x2, double media) {
  std::cout << "+----+----+----+----+----+----+----+----+" << std::endl;
  std::cout << " La media de " << x1 << " y " << x2 << " es: " << media << std::endl;
  std::cout << "+----+----+----+----+----+----+----+----+" << std::endl;
}
