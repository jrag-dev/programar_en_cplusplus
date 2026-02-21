


#include <iostream>
#include <iomanip>
using namespace std;


class Fecha {

  private:
    unsigned int dia;
    unsigned int mes;
    unsigned int anio;

  public:
    Fecha(unsigned int _dia = 1, unsigned int _mes = 1, unsigned int _anio = 1000) : dia(_dia), mes(_mes), anio(_anio) {
      cout << "\nConstructor parametrizado: " << dia << "-" << mes << "-" << anio << endl;
    }

    Fecha(const Fecha& _fecha) : dia(_fecha.dia), mes(_fecha.mes), anio(_fecha.anio) {
      cout << "\nConstructor por copia. " << endl;
    }

    ~Fecha() {
      cout << "\nDestructor de fecha" << endl;
    }

    friend std::ostream& operator<<(std::ostream& os, const Fecha& f) {
      os << std::setfill('0') << std::setw(2) << f.dia << "-"
         << std::setfill('0') << std::setw(2) << f.mes << "-"
         << f.anio;
      return os;
    }

  // Métodos setters
    void setDia(unsigned int _dia) {
      if (_dia >= 1 && _dia <= 31) {
        this->dia = _dia;
      } else {
        cout << "Error: Día inválido." << endl;
      }
    }

    void setMes(unsigned int _mes) {
      if (_mes >= 1 && _mes <= 12) {
        this->mes = _mes;
      } else {
        cout << "Error: Mes inválido." << endl;
      }
    }

    void setAnio(unsigned int _anio) {
      if (_anio >= 1000 && _anio <= 3000) {
        this->anio = _anio;
      } else {
        cout << "Error: Año inválido." << endl;
      }
    }

  // Métodos getters
    unsigned int getDia() const {
      return this->dia;
    }

    unsigned int getMes() const {
      return this->mes;
    }

    unsigned int getAnio() const {
      return this->anio;
    }

    // Metodos personalizados
    void visualizar() {
      cout << "\nFecha: " 
          << std::setfill('0') << std::setw(2) << this->dia << "-" 
          << std::setfill('0') << std::setw(2) << this->mes << "-" 
          << this->anio << endl;
    }

};


int main(int argc, char *argv[])
{
  Fecha fecha1(21, 11, 1988);
  Fecha fecha2(29, 9, 1987);
  Fecha fecha3(17, 1, 1991);

  cout << "\nCumple de Jose: " << fecha1 << endl;
  cout << "\nCumple de Kira: " << fecha2<< endl;
  cout << "\nCumple de Paola: " << fecha3 << endl;
  
  return 0;
}
