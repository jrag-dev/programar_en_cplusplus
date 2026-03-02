
#include <iostream>
#include "biblioteca.h"


int main(int argc, char *argv[])
{
  // Creamos la biblioteca
  Biblioteca miBiblioteca;

  std::cout << "\n--- AGREGANDO MATERIALES ---\n";
  
  miBiblioteca.agregarMaterial<Libro>(
      "Cien Años de Soledad", "LIB-001", 1967, 
      "Gabriel García Márquez", "Sudamericana", 496
  );
  
  miBiblioteca.agregarMaterial<Libro>(
      "El Quijote", "LIB-002", 1605,
      "Miguel de Cervantes", "Real Academia", 863
  );
  
  miBiblioteca.agregarMaterial<Revista>(
      "National Geographic", "REV-001", 2023,
      345, "Marzo"
  );


  std::cout << "\n--- RESISTRANDO USUARIOS ----\n";
  miBiblioteca.agregarUsuario<Estudiante>("Jose Alvarado", 101, "Física", 10);
  miBiblioteca.agregarUsuario<Estudiante>("Fernando Herrera", 100, "Matemáticas", 8);

  miBiblioteca.listarCatalogo();
  miBiblioteca.listarUsuarios();
  miBiblioteca.mostrarEstadisticas();

  std::cout << "\n🔴 === REALIZANDO PRÉSTAMOS ===\n";

  // Estudiante pide un libro
  miBiblioteca.prestarMaterial("LIB-001", 1001);  // Ana toma Cien Años

  // Profesor pide una revista
  miBiblioteca.prestarMaterial("REV-001", 2001);  // Dr. Rodríguez toma National Geographic

  // Estudiante pide un DVD
  miBiblioteca.prestarMaterial("DVD-001", 1001);  // Ana toma Inception

  // Estudiante intenta pedir otro (debería llegar al límite)
  miBiblioteca.prestarMaterial("LIB-002", 1001);  // Ana intenta tomar El Quijote (¡falla!)

  // Profesor pide un libro (sí puede, tiene más capacidad)
  miBiblioteca.prestarMaterial("LIB-002", 2001);  // Dr. Rodríguez toma El Quijote

  // --- 5. MOSTRAR ESTADO DESPUÉS DE PRÉSTAMOS ---
  miBiblioteca.listarCatalogo();
  miBiblioteca.listarUsuarios();

  // --- 6. DEVOLUCIONES ---
  std::cout << "\n🟢 === DEVOLUCIONES ===\n";
  miBiblioteca.devolverMaterial("LIB-001", 1001);  // Ana devuelve
  miBiblioteca.devolverMaterial("DVD-001", 1001);  // Ana devuelve

  // --- 7. ESTADO FINAL ---
  miBiblioteca.listarCatalogo();
  miBiblioteca.mostrarEstadisticas();

  
  return 0;
}
