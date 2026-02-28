// ****************************************************************************************\\
//  hora.cpp
// 
//  Un número complejo tiene dos partes: una parte real y una parte imaginaria; por ejemplo, 
//  en (4.5+3.0i), 4.5 es la parte real y 3.0 es la parte imaginaria. Realizar una clase 
//  Complejo que permita la gestión de números complejos 
//  (un número complejo = dos números reales).
//
//  Suponga que a = (A, Bi) y c = (C, Di). Se desea añadir a la clase complejo las operaciones:
//  
//  Suma: a + c = (A + C, (B + D)i).
//  Resta: a – c = (A – C, (B – D)i).
//  Multiplicación: a * c=(A * C – B * D, (A * D + B * C)i).
//  Multiplicación: x * c = (x * C, x * Di), donde x es real.
//  Conjugado: ~a = (A. –Bi).
//
// Developer: Jose Alvarado
// Date: 22-02-2026
// ****************************************************************************************//

#include <iostream>
#include <iomanip>
#include <limits>

const double EPSILON = 1e-9;  // Un margen de error aceptable

class Complejo {

  private:
    double p_r;       // parte real
    double p_im;      // parte imaginaria

  public:
    Complejo(double _p_r = 0.0, double _p_im = 0.0) : p_r(_p_r), p_im(_p_im) {
      std::cout << "Se ha creado ";
      this->escribirComplejo();
    }

    ~Complejo() {
      std::cout << "\nSe ejecutó el destructor de ";
      this->escribirComplejo();
    }

    inline void leerComplejo() {
      double _p_r, _p_im;

      std::cout << "\nIntroduzca la parte real: ";
      while (!(std::cin >> _p_r)) {
        std::cout << "Error: la parte real debe ser un número. Intente nuevamente: " << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }
      
      std::cout << "\nIntroduzca la parte imaginaria: ";
      while (!(std::cin >> _p_im)) {
        std::cout << "Error: la parte imaginaria debe ser un número. Intente nuevamente: " << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }

      this->p_r = _p_r;
      this->p_im = _p_im;
    }

    // sobrecarga del operador +
    inline Complejo operator+(const Complejo& c) const {
      double p_r_new = this->p_r + c.p_r;
      double p_im_new = this->p_im + c.p_im;
      return Complejo(p_r_new, p_im_new);
    }

    // sobrecarga del operador -
    inline Complejo operator-(const Complejo& c) const {
      double p_r_new = this->p_r - c.p_r;
      double p_im_new = this->p_im - c.p_im;
      return Complejo(p_r_new, p_im_new);
    }

    // sobrecarga del operador *
    inline Complejo operator*(const Complejo& c) const {
      double p_r_new = this->p_r * c.p_r - this->p_im * c.p_im;
      double p_im_new = this->p_r * c.p_im + this->p_im * c.p_r;
      return Complejo(p_r_new, p_im_new);
    }

    // sobrecarga del operador * para multiplicar por una constante real
    inline friend Complejo operator*(double k, const Complejo& c) {
      return Complejo( c.p_r * k, c.p_im * k );
    }

    // complejo conjugado
    inline Complejo complejoConjugado() const {
      return Complejo(this->p_r, -this->p_im);
    }

    void escribirComplejo() const {
      std::cout << "\nz: " << this->p_r;

      if (std::abs(p_im) < EPSILON) {
      } else if (std::abs(p_im - 1.0) < EPSILON) {
        std::cout << " + i";
      } else if (std::abs(p_im + 1.0) < EPSILON) {
        std::cout << " - i";
      } else if (p_im > 0) {
        std::cout << " + " << p_im << "i";
      } else {
        std::cout << " - " << std::abs(p_im) << "i";
      }
      std::cout << std::endl;
    }
};


int main(int argc, char *argv[])
{
  Complejo c1(1.0, 2.0);
  Complejo c2;

  c2.leerComplejo();

  c1.escribirComplejo();
  c2.escribirComplejo();

  Complejo c3 = c1 + c2;
  Complejo c4 = c1 - c2;
  Complejo c5 = c1 * c2;
  Complejo c6 = 2 * c1;
  Complejo c7 = c1.complejoConjugado();

  std::cout << "\nMostrando los valores: " << std::endl;
  c1.escribirComplejo();
  c2.escribirComplejo();
  c3.escribirComplejo();
  c4.escribirComplejo();
  c5.escribirComplejo();
  c6.escribirComplejo();
  c7.escribirComplejo();
  
  return 0;
}
