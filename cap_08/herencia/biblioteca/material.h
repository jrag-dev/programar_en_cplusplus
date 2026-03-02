#ifndef MATERIAL_H
#define MATERIAL_H


#include <string>
#include <iostream>


// Clase abstracta: no se puede instanciar directamente
class Material {

  protected:
    std::string titulo;
    std::string codigo_identificacion;
    bool disponible;
    unsigned int anio_publicacion;

  public:
    Material(std::string _tit, std::string _cod, unsigned int _anio) : 
      titulo(_tit), codigo_identificacion(_cod), anio_publicacion(_anio), disponible(true) {
        std::cout << "Material [" << titulo << "] creado (desde clase base)\n";
    }

    virtual ~Material() {
        std::cout << "Material [" << titulo << "] destruido (desde clase base)\n";
    }

    // Métodos concretos
    std::string getTitulo() const {
      return titulo;
    }

    std::string getCodigo() const {
      return codigo_identificacion;
    }

    bool getDisponible() const {
      return disponible;
    }

    // Método concreto que puede ser heredado tal cual
    virtual bool prestar() {
      if (disponible) {
        disponible = false;
        std::cout << "Material [" << titulo << "] prestado con éxito.\n";
        return true;
      }
      std::cout << "Material [" << titulo << "] no está disponible.\n";
      return false;
    }

    virtual void devolver() {
      if (!disponible) {
        disponible = true;
        std::cout << "Material [" << titulo << "] devuelto.\n";
      }
    }

    // Método virtual puro (abstracto)
    virtual void mostrarInfo() const = 0;

    // Método virtual con implemen tación por defecto (puede ser sobreescrito)
    virtual int getDiasPrestamo() const {
      return 7; // por defecto, 7 días
    }
};


#endif // ifndef MATERIAL_H

