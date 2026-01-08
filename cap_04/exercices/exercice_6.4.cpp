
#include <iostream>
#include <limits>
#include <array>
#include <string>

using namespace std;


constexpr std::array<bool, 256> initialize_vocals() {
  std::array<bool, 256> vocals = {false};

  const char vocals_list[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

  for (char v : vocals_list) {
    vocals[static_cast<unsigned char>(v)] = true;
  }

  return vocals;
}

void get_character(char& ch);
bool is_vocal(char ch);
void print_response(char ch, bool vocal);

constexpr std::array<bool, 256> VOCALS = initialize_vocals();

int main(int argc, char *argv[])
{
  char character;
  bool vocal;

  get_character(character);

  vocal = is_vocal(character);

  print_response(character, vocal);
  
  return 0;
}


void get_character(char& ch)
{
    cout << "\nEnter a character: ";
    while (!(cin >> ch)) {
      // ERROR DE TIPO (el usuario ingreso algo que no es un character)
      cout << "\nError: Input no valid. Please, enter a character.\n";
      cin.clear();
      cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
    }
}

bool is_vocal(char ch)
{ 
  return VOCALS[static_cast<unsigned char>(ch)];
}

void print_response(char ch, bool vocal)
{
  string resp;

  resp = vocal ? "is a vocal" : "isn't a vocal";
  cout << "The " << ch << " character " << resp << endl; 
}

