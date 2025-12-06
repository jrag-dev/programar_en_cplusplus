

#include <iostream>
#include <ostream>

double calculate_average(int number_of_notes);

int main() {

  double media;
  int number_of_notes = 4;
  char note;

  // call to calculate_average
  media = calculate_average(number_of_notes);

  if (media >= 90) {
    note = 'A';
  } else if (media >= 80) {
    note = 'B';
  } else if (media >= 70) {
    note = 'C';
  } else if (media >= 60) {
    note = 'D';
  } else if (media >= 0) {
    note = 'E';
  } else {
    std::cout << "Invalid note.";
    return 1;
  }

  std::cout << "The average note is: " << note << std::endl;

  return 0;
}

double calculate_average(int number_of_notes) {
  int count = 0;
  double suma;

  while (count < number_of_notes) {
    double temp_note;
    std::cout << "Enter note: " << count + 1 << std::endl;

    if (!(std::cin >> temp_note)) {
      std::cout << "Error: Invalid data type. Please enter a number.\n";
      std::cin.clear();
      std::cin.ignore(10000, '\n');
      continue;
    }

    if (temp_note < 0 || temp_note > 100) {
      std::cout << "Error: Note must be between 0 and 100.\n";
      continue;
    }

    count++;
    suma += temp_note;
  }

  return suma / number_of_notes;
}
