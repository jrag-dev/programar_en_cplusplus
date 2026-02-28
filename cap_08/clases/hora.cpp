// ****************************************************************************************\\
//  hora.cpp
// 
// Crear una clase llamada hora que tenga miembros datos separados de tipo int para 
// horas, minutos y segundos. Un constructor inicializará este dato a 0, y otro lo inicializará 
// a valores fijos. Una función miembro deberá visualizar la hora en formato 11:59:59. Otra 
// función miembro sumará dos objetos de tipo hora pasados como argumentos. Una función principal 
// main() crea dos objetos inicializados y uno que no está inicializado. Sumar los dos valores 
// inicializados y dejar el resultado en el objeto no inicializado. Por último, visualizar 
// el valor resultante.
//
// Developer: Jose Alvarado
// Date: 22-02-2026
// ****************************************************************************************//

#include <iostream>
#include <iomanip>


class Hora {

  private:
    unsigned int horas;
    unsigned int minutos;
    unsigned int segundos;

  public:
    Hora(unsigned int _h = 0, unsigned int _m = 0, unsigned int _s = 0) : horas(_h), minutos(_m), segundos(_s) {
      std::cout << "\nCreando Hora." << std::endl;
    }

    ~Hora() {
      std::cout << "\nDestructor de Hora." << std::endl;
    }

    // sumar dos objetos horas
    void sumarHoras(const Hora& h1, const Hora& h2) {
      // 1. sumar segundos
      this->segundos = h1.segundos + h2.segundos;
      unsigned int carry_m = this->segundos / 60;
      this->segundos %= 60;

      // 2. sumar minutos
      this->minutos = h1.minutos + h2.minutos + carry_m;
      unsigned int carry_h = this->minutos / 60;
      this->minutos %= 60;

      // 3. Sumar horas + el carry_h
      this->horas = h1.horas + h2.horas + carry_h;
    }

    // sobrecargar el operador +
    friend Hora operator+(const Hora& h1, const Hora& h2) {
      unsigned int s = h1.segundos + h2.segundos;
      unsigned int carry_m = s / 60;
      s %= 60;

      unsigned int m = h1.minutos + h2.minutos + carry_m;
      unsigned int carry_h = m / 60;
      m %= 60;

      unsigned int h = h1.horas + h2.horas + carry_h;

      return Hora(h, m, s);
    }

    // sobrecarga del operador <<
    friend std::ostream& operator<<(std::ostream& os, const Hora& hora) {
      os << std::setfill('0') << std::setw(2) << hora.horas << ":"
         << std::setfill('0') << std::setw(2) << hora.minutos << ":"
         << std::setfill('0') << std::setw(2) << hora.segundos << std::endl;

      return os;
    }
};


int main(int argc, char *argv[])
{
  Hora h1(10, 15, 55);
  Hora h2(5, 30, 01);

  std::cout << " \n" << h1 << std::endl;
  std::cout << " \n" << h2 << std::endl;

  Hora h3;

  h3.sumarHoras(h1, h2);
 
  std::cout << " \n" << h3 << std::endl;

  std::cout << "\n----------- Sobrecarga del operador + -----------" << std::endl;
  Hora h4;
  h4 = h1 + h2;
  
  std::cout << h4 << std::endl;


  
  return 0;
}
