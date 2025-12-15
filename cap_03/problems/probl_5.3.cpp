#include <iostream>
#include <limits>


/*
 * c0: number of zeros
 * c1: number of negatives values
 * c2 number of positives values
*/
void show_results(int c0, int c1, int c2);

int main(int argc, char *argv[])
{
  const int MAX_NUMBER = 10;
  int counter_numbers = 0;
  int current_number;
  int counter_positives = 0;
  int counter_negatives = 0;
  int counter_zeros = 0;

  do {
    std::cout << "Enter a integer number: ";

    if (!(std::cin >> current_number)) {
      std::cout << "\nError: Input not valid. Please intent again!" << std::endl;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
continue;
    }

    if (current_number == 0) {
      counter_zeros++;
    } else if (current_number < 0) {
      counter_negatives++;
    } else {
      counter_positives++;
    }
    counter_numbers++;

  } while (counter_numbers < MAX_NUMBER);

  // call to show results
  show_results(counter_zeros, counter_negatives, counter_positives);
  
  return 0;
}


void show_results(int c0, int c1, int c2) {
  std::cout << "\n*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*" << std::endl;
  std::cout << " Zeros: " << c0 << std::endl;
  std::cout << " Negatives: " << c1 << std::endl;
  std::cout << " Positives: " << c2 << std::endl;
  std::cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*" << std::endl;
}
