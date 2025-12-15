#include <iostream>


int main(int argc, char *argv[])
{
  char character = 'Z';
  
  for (char b2 = character; b2 >= 'A'; b2--) {
    for (char b1 = b2; b1 >= 'A'; b1--) {
      std::cout << b1 << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}
