/*
 * Funciones en línea para calcular el volumen y el ár ea total de un cilindro del 
 * que se leen su r adio y altura.
*/


#include <iostream>


const float Pi = 3.141592;

inline float vol_cilindro(float radio, float altura) {
  return (Pi * radio * radio * altura);
}

inline float area_total_cilindro(float radio, float altura) {
  return (2 * Pi * radio * altura + Pi * radio * radio);
}


int main(int argc, char *argv[])
{
  float radio, altura, volumen, area_total;

  do {
    std::cout << "Introduzca el radio del cilindro (valor positivo): ";
    std::cin >> radio;
    std::cout << "Introduzca la altura del cilindro (valor positivo): ";
    std::cin >> altura;
  } while ((radio <= 0) || (altura <= 0));

  volumen = vol_cilindro(radio, altura);

  area_total = area_total_cilindro(radio, altura);
  
  std::cout << "El volumen del cilindro es: " << volumen << std::endl;
  std::cout << "El área total del cilindro es: " << area_total << std::endl;
  
  return 0;
}
