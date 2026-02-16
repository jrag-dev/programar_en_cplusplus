

#include <iostream>

int main() {

  // Un array de 3 temperaturas (doubles)
  // En memoria, esto ocupa 3 * 8 = 24 bytes contiguos.
  double temps[] = {100.0, 250.5, 500.2};

  // creamos un puntero y hacemos que apunte al inicio del array
  double *ptr = temps; // equivalente a &temps[0]

  std::cout << "--- Inicio ---" << std::endl;
  std::cout << "Dirección base: " << ptr << " | Valor: " << *ptr << std::endl;

  ptr = ptr + 1; // Moverse al siguiente elemento

  std::cout << "--- ptr + 1 ---" << std::endl;
  std::cout << "Nueva dirección: " << ptr << " | Valor: " << *ptr << std::endl;

  std::cout << "--- Equivalencia ---" << std::endl;
  std::cout << "temps[2]: " << temps[2] << std::endl;
  std::cout << "*(temps + 2): " << *(temps + 2) << std::endl;

  ptr = nullptr;

  const size_t len = sizeof(temps) / sizeof(temps[0]);
  for (size_t i = 0; i < len; i++) {
    std::cout << "*temps + " << i << "): " << *(temps + i) << std::endl;
  }

  ptr = nullptr;

  if (ptr != nullptr)
    std::cout << "ptr: " << ptr << " | Valor: " << *ptr << std::endl;
  else
    std::cout << "Esta vacio ptr" << std::endl;

  return 0;
}
