

#include <exception>
#include <ios>
#include <iostream>
#include <limits>
#include <ostream>
#include <stdexcept>
#include <string>

void show_menu();

float get_hour_working();

float get_salary_net(float hour_working_weekly, int hour_working_expected,
                     float rate);
void show_results(float salary_neto);

int main() {
  float salary_neto;
  float hour_working_weekly;
  float rate;
  int hour_working_expected = 38;

  // call to show menu
  show_menu();

  // call to get_hour_working
  rate = 20.0f;

  try {
    hour_working_weekly = get_hour_working();
    std::cout << "Successfully read hours: " << hour_working_weekly
              << std::endl;
  } catch (const std::exception &e) {
    // If throw some exception

    std::cerr << "\n---\tPROGRAM TERMINATED DUE TO ERROR ---" << std::endl;
    std::cerr << "Exception details: " << e.what() << std::endl;
    std::cerr << "--------------------------------------------------------"
              << std::endl;

    // Return a output code diferent to 0 (error convention)
    return 1;
  }

  // call get_salary_net
  salary_neto =
      get_salary_net(hour_working_weekly, hour_working_expected, rate);

  // call show results
  show_results(salary_neto);
}

void show_menu() {
  std::cout << "***************************************************************"
               "********"
            << std::endl;
  std::cout << "*\tThis program receive the hour working weekly and return the"
            << std::endl;
  std::cout << "*\tsalary net for an worker." << std::endl;
  std::cout << "***************************************************************"
               "********"
            << std::endl;
}

float get_hour_working() {

  float hour_working;
  std::cout << "Enter the number of hours that you working this week: ";

  if (!(std::cin >> hour_working)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    throw std::runtime_error("Input error: Entered non-numeric data.");
  }

  if ((hour_working > 0.0f) && (hour_working < 80.0f)) {
    return hour_working;
  } else {
    std::string error_msg = "Value error: " + std::to_string(hour_working) +
                            " is outside the valid range (0 to 80).";

    throw std::runtime_error(error_msg);
  }
}

float get_salary_net(float hour_working_weekly, int hour_working_expected,
                     float rate) {
  float hour_extras;
  float hour_ordinaries;
  float salary_bruto;
  float taxes;

  if (hour_working_weekly < hour_working_expected) {
    hour_extras = 0.0f;
    hour_ordinaries = hour_working_weekly;
  } else {
    hour_extras = hour_working_weekly - (hour_working_expected - 1.0f);
    hour_ordinaries = hour_working_weekly - hour_extras;
  }

  salary_bruto = (hour_ordinaries + (1.50) * hour_extras) * rate;
  std::cout << salary_bruto << std::endl;

  salary_bruto <= 600.0f ? (taxes = 0.0f) : (taxes = (0.10f) * salary_bruto);

  return salary_bruto - taxes;
}

void show_results(float salary_neto) {
  std::cout << "The weekly salary net is: " << salary_neto << std::endl;
}
