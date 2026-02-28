#ifndef BIBLIOTECA
#define BIBLIOTECA

#include "libro.h"
#include "usuario.h"
#include <vector>
#include <algorithm>  // para std::find_if
#include <memory>     // para std::unique_ptr (punteros inteligentes)


class Biblioteca {

  private:
    // Composición / Agregación: La biblioteca tiene libros
    std::vector<std::unique_ptr<Libro>> catalogo;

    // Agregación: La biblioteca tiene usuarios, pero pueden existir por sí mismos.
    std::vector<Usuario> usuarios;

    // Asociación temporal: No guardamos estos objetos, solo los guadamos en métodos.

  public:
    Biblioteca() {
      std::cout << "Biblioteca creada.\n";
    }

    // Método para agregar un libro (crea un Libro y lo añade al catálogo)
    void agregarLibro(const std::string& _titulo, const std::string& _autor, const std::string& _isbn) {
      // Usamos std::make_unique para crear el unique_ptr (c++14)
      auto nuevo_libro = std::make_unique<Libro>(_titulo, _autor, _isbn);

      // Mostramos info desde aqui para ver que el libro existe
      nuevo_libro->mostrarInfo();

      // movemos la propiedad al vector (unique_ptr no se copia, solo se mueve)
      catalogo.push_back(std::move(nuevo_libro));
    }

    // Método para registrar un usuario
    void registrarUsuario(const std::string& _nombre, int _id) {
      usuarios.emplace_back(_nombre, _id);
      std::cout << "Usuario registrado en la biblioteca.\n";
    }

    // Método para buscar un libro por ISBN (Asociación devuelve el puntero del libro)
    Libro* buscarLibroPorIsbn(const std::string& _isbn) {
      auto it = std::find_if(catalogo.begin(), catalogo.end(), [&_isbn](const std::unique_ptr<Libro>& l) {
          return l->getIsbn() == _isbn;
          });

      if (it != catalogo.end()) {
        return it->get();   // it -> es un unique_ptr, .get() devuelve el raw pointer
      }
      return nullptr; // no encontrado
    }

    // Método para prestar un libro (Asociación con Usuario y Libro)
    bool prestarLibro(const std::string& _isbn, int _id_usuario) {
      Libro* libro = buscarLibroPorIsbn(_isbn);
      if (!libro) {
        std::cout << "Libro con ISBN " << _isbn << " no encontrado.\n";
        return false;
      }

      // Buscar usuario (simplificado, asumimos que existe)
      std::cout << "Intentamos prestar libro a usuarii ID: " << _id_usuario << std::endl;

      // El método prestar() ya tiene la lógica de disponibilidad
      return libro->prestar();
    }

    void devolverLibro(const std::string& _isbn) {
      Libro* libro = buscarLibroPorIsbn(_isbn);
      if (libro) {
        libro->devolver();
      } else {
        std::cout << "Libro con ISBN " << _isbn << " no encontrado.";
      }
    }

    void listarCatalogo() const {
      std::cout << "\n--- Catálogo de la Biblioteca ---\n";
      for (const auto& libro : catalogo) {
        libro->mostrarInfo();
      }
      std::cout << "-----------------------------------\n";
    }

    void listarUsuarios() const {
      std::cout << "\n--- Usuarios Registrados ---\n";
      for (const auto& usuario : usuarios) {
        usuario.mostrarInfo();
      }
      std::cout << "-----------------------------------\n";
    }
};


#endif // BIBLIOTECA_H
