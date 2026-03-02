#ifndef REVISTA_H
#define REVISTA_H

#include "material.h"

class Revista : public Material {

  private:
    int num_edicion;
    std::string mes_publicacion;

  public:
    Revista(std::string _tit, std::string _cod, int _anio, int _num_ed, std::string _mes_pub) : 
      Material(_tit, _cod, _anio), num_edicion(_num_ed), mes_publicacion(_mes_pub) {
        std::cout << "Revista [" << titulo << "] - detalles específicos añadidos\n";
      }

    ~Revista() override {
      std::cout << "Destructor específico de Revista [" << titulo << "]\n";
    }

    void mostrarInfo() const override {
      std::cout << "📰 REVISTA: " << titulo
                << " | Edición #" << num_edicion
                << " | " << mes_publicacion << " " << anio_publicacion
                << " | " << (disponible ? "✅ Disponible" : "❌ Prestado")
                << " | Préstamo: " << getDiasPrestamo() << " días (solo en sala)\n";
    }

    int getDiasPrestamo() const override {
      return 2;   // Las revistas solo se prestan por 2 días
    }

};

#endif // REVISTA_H
