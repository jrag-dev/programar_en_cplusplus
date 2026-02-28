#ifndef USUARIO_H
#define USUARIO_H


#include <string>
#include <iostream>


class Usuario {

  private:
    std::string nombre;
    int id;

  public:
    Usuario(std::string _nombre, int _id) : nombre(_nombre), id(_id) {
      std::cout << "Usuario '" << nombre << "' creado.\n";
    }

    std::string getNombre() const {
      return nombre;
    }

    void mostrarInfo() const {
      std::cout << "Usuario '" << nombre << " (ID: " << id << ")\n";
    }

};

#endif // USUARIO_H
