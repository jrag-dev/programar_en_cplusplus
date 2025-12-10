

#include <cstdlib>
#include <iostream>
#include <ostream>
int main(int argc, char *argv[]) {
  char new_character;
  bool character_readed = false;

  while (!character_readed) {
    std::cout << "Enter a character digit for leave: ";
    std::cin >> new_character;
    character_readed = (('0' <= new_character) && (new_character <= '9'));
  }

  std::cout << new_character << " is a character readed." << std::endl;

  return EXIT_SUCCESS;
}
