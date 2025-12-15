/* 
 * Escribir un programa que lea el radio de una esfera y visualice su área y su volumen.
*/

#include <iostream>
#include <limits>
#include <cmath>


double get_radio();
double calculate_area(double r);
double calculate_volumen(double r);
void show_sphere_data(double r, double area, double volumen);


int main(int argc, char *argv[])
{
  double r;
  double area;
  double volumen;


  // call to get_radio
  r = get_radio();

  // call to calculate_area
  area = calculate_area(r);

  // call to calculate_volumen
  volumen = calculate_volumen(r);

  // call to show_sphere_data
  show_sphere_data(r, area, volumen);
  
  return 0;
}


double get_radio() {
  double r;

  std::cout << "\nIntroduzca el radio de la esfera: " << std::endl;
  do {
    if (!(std::cin >> r)) {
      std::cout << "\nError: el radio de la esfera debe ser un número positivo." << std::endl;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    if (r <= 0) {
      std::cout << "\nError: El radio debe un número positivo. Intente nuevamente!" << std::endl;
    }
  } while ( r <= 0 );

  return r;
}

double calculate_area(double r) {
  const double PI = (4.0)*(std::atan(1.0));
  return (4.0)*(PI)*(r)*(r);
}

double calculate_volumen(double r) {
  const double PI = (4.0)*(std::atan(1.0));
  return (4.0/3.0)*PI*(std::pow(r, 3));
}

void show_sphere_data(double r, double area, double volumen) {
  std::cout << "\n*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*" << std::endl;
  std::cout << " El radio de la esfera es: " << r << " m"<< std::endl;
  std::cout << " El área de la esfera es: " << area << " m2" << std::endl;
  std::cout << " El volumen de la esfera es: " << volumen << " m3" << std::endl;
  std::cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*\n" << std::endl;
}
