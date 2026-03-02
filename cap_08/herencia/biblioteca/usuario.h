#ifndef USUARIO_H
#define USUARIO_H


#include <string>
#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>


// Forward declaration -> para evitar dependencia circular
class Material;


class Usuario {

  protected:
    std::string nombre;
    int id;
    std::vector<std::string> materiales_prestados;  // guardamos los códigos

  public:
    Usuario(std::string _nombre, int _id) : nombre(_nombre), id(_id) {
      std::cout << "Usuario base [" << nombre << "] creado\n";
    }

    virtual ~Usuario() {
      std::cout << "Usuario base [" << nombre << "] destruido\n";
    }

    // Métodos concretos
    std::string getNombre() const {
      return nombre;
    }

    int getId() const { return id; }

    // Métdodos virtuales que puede ser sobreescritos
    virtual int getMaxPrestamos() const {
      return 2;   // por defecto, 2 materiales
    }

    virtual int getDiasPrestamoPermitido() const {
      return 7;   // por defecto 7 días
    }

    // Método para registrar un préstamo
    virtual void registrarPrestamo(const std::string& codigo) {
      if (materiales_prestados.size() < getMaxPrestamos()) {
        materiales_prestados.push_back(codigo);
        std::cout << "Préstamo registrado para " << nombre
                  << ". Ahora tiene " << materiales_prestados.size()
                  << "/" << getMaxPrestamos() << " materiales\n";
      } else {
        std::cout << "❌ " << nombre << " ya alcanzó su límite de préstamos\n";
      }
    }

    virtual void devolverMaterial(const std::string& codigo) {
      auto it = std::find(materiales_prestados.begin(), materiales_prestados.end(), codigo);
      if (it != materiales_prestados.end()) {
        materiales_prestados.erase(it);
        std::cout << "✅ Material devuelto por " << nombre << std::endl;
      } else {
        std::cout << "❌ El material " << codigo << " no estaba prestado a " << nombre << std::endl;
      }
    }

    virtual bool puedePrestar() const {
      return materiales_prestados.size() < getMaxPrestamos();
    }

    // Método virtual puro -> las clases hijas deben implementar 
    virtual void mostrarInfo() const = 0;

    int getNumPrestamos() const {
      return materiales_prestados.size();
    }
};

#endif // USUARIO_H
