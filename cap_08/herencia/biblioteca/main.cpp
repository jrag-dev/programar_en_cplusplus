
#include <iostream>
#include "biblioteca.h"


int main(int argc, char *argv[])
{
  // Creamos la biblioteca
  Biblioteca miBiblioteca;

  miBiblioteca.agregarLibro("Quantum MEchanics", "Sakuray", "101");
  miBiblioteca.agregarLibro("Quantum Statistical", "Finn", "102");
  miBiblioteca.agregarLibro("Condensed Matter Theory", "Miller", "103");

  miBiblioteca.listarCatalogo();

  miBiblioteca.registrarUsuario("Jose Alvarado", 101);
  miBiblioteca.registrarUsuario("Fernando Herrera", 100);

  miBiblioteca.listarUsuarios();

  miBiblioteca.prestarLibro("101", 101);
  miBiblioteca.prestarLibro("103", 101);
  miBiblioteca.listarCatalogo();

  
  return 0;
}
