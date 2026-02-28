#ifndef LIBRO_H
#define LIBRO_H

#include <string>
#include <iostream>


// Clase que representa un libro de la biblioteca
class Libro {

  private:
    std::string titulo;
    std::string autor;
    std::string isbn;
    bool disponible;  // estado del libro
    
  public:
    // Constructor: Se llama al crear el objeto. Inicializa el estado
    Libro(std::string _titulo, std::string _autor, std::string _isbn) : 
      titulo(_titulo), autor(_autor), isbn(_isbn), disponible(true) 
    {
      std::cout << "Libro '" << titulo << "' creado" << std::endl;
    }
    
    // Destructor: Se llama al destruir el objeto. Para limpieza.
    ~Libro() {
      std::cout << "Libro '" << titulo << "' destruido." << std::endl;
    }

    std::string getTitulo() const {
      return titulo;
    }

    // Getters (Consultores)
    std::string getAutor() const {
      return autor;
    }

    std::string getIsbn() const {
      return isbn;
    }

    bool estaDisponible() const {
      return disponible;
    }

    // Setters (Modificadores)

    // Método para prestar el libro. Cambia el estado si esta disponible el libro.
    bool prestar() {
      if (disponible) {
        disponible = false;
        std::cout << "Libro '" << titulo << "' prestado con éxito.\n";
        return true;
      } else {
        std::cout << "El libro '" << titulo << "' no está disponible.\n";
        return false;
      }
    }

    // Método para devolver el libro
    void devolver() {
      if (!disponible) {
        disponible = true;
        std::cout << "Libro '" << titulo << "' devuelto.\n";
      } else {
        std::cout << "El libro '" << titulo << "' ya estaba disponible.\n";
      }
    }

    // Mostrar información del libro
    void mostrarInfo() const {
      std::cout << "\nTitulo: " << titulo << "\nAutor: " << autor << "\nISBN: " << isbn << "\nEstado: " << (disponible ? " Disponible." : "Prestado.") << std::endl;
    }

};

#endif
