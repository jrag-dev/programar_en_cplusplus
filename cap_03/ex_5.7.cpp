/*
 * Learn about the break sentence
 *
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <ostream>
#include <string>
int main(int argc, char *argv[]) {
  int key;
  int input_integer;

  std::ifstream keyFile("key.txt");
  std::string line;

  if (keyFile.is_open()) {
    std::cout << "Contenido del archivo: " << std::endl;

    while (std::getline(keyFile, line)) {
      std::cout << line << std::endl;
      key = std::stoi(line);
    }
    keyFile.close();
  } else {
    std::cerr << "Error: keyFile not open for read." << std::endl;
    return 1;
  }

  std::cout << "Key: " << key << std::endl;

  std::cout << "Enter an integer value: ";

  while (std::cin >> input_integer) {
    if (input_integer != key) {
      std::cout << "input_integer: " << input_integer << std::endl;
    } else {
      break;
    }
  }

  return EXIT_SUCCESS;
}
