#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H


#include "usuario.h"

class Estudiante : public Usuario {

  private:
    std::string carrera;
    int semestre;

  public:
    Estudiante(std::string _nom, int _id, std::string _carr, int _semestre) :
      Usuario(_nom, _id), carrera(_carr), semestre(_semestre) {
        std::cout << "Estudiante [" << nombre << "] - detalles específicos añadidos\n";
      }

    ~Estudiante() override {
      std::cout << "Destructor específico de Estudiante [" << nombre << "]\n";
    }

    int getMaxPrestamos() const override {
      return 3;   // Estudiantes 3 materiaeles
    } 

    int getDiasPrestamoPermitido() const override {
      return 15;  // Estudiantes: 15 días
    }

    void mostrarInfo() const override {
      std::cout << "👨🎓 ESTUDIANTE: " << nombre
                << "(ID: " << id << ")"
                << " | Carrera: " << carrera
                << " | Semestre: " << semestre
                << " | Préstamos: " << materiales_prestados.size() << "/" << getMaxPrestamos()
                << " | Días permitidos: " << getDiasPrestamoPermitido() << "\n";
    }

};

#endif // ESTUDIANTE_H
