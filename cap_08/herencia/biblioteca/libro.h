#ifndef LIBRO_H
#define LIBRO_H

#include "material.h"


// Clase que representa un libro de la biblioteca
class Libro : public Material {

  private:
    std::string autor;
    std::string editorial;
    int numeroPaginas;
    
  public:
    // Constructor: llama al Constructor de Material y luego inicializa lo suyo
    Libro(std::string _titulo, std::string _cod, int _anio, std::string _autor, std::string _editorial, int _pag) : 
      Material(_titulo, _cod, _anio), autor(_autor), editorial(_editorial), numeroPaginas(_pag)
    {
      std::cout << "Libro [" << titulo << "]- detalles especificos añadidos\n" << std::endl;
    }
    
    // Destructor: Se llama al destruir el objeto. Para limpieza.
    ~Libro() override {
      std::cout << "Destructor especifico de Libro [" << titulo << "]" << std::endl;
    }

    // Implementación del método virtual puro (OBLIGATORIO)
    void mostrarInfo() const override {
      std::cout << "📖 LIBRO: " << titulo
                << " | Autor: " << autor
                << " | Alo: " << anio_publicacion
                << " | Editorial: " << editorial
                << " | Páginas: " << numeroPaginas
                << " | " << (disponible ? "✅ Disponible" : "❌ Prestado")
                << " | Préstamo: " << getDiasPrestamo() << " días\n";
    }

    // Sobreescribimos el método de dias de préstamo (opcional)
    int getDiasPrestamo() const override {
      return 15;
    } 

    std::string getAutor() const { return autor; }

};

#endif
