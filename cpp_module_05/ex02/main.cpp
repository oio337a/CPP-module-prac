#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {

  Bureaucrat yongmipa("yongmipa", 150);
  Bureaucrat test("test", 1);

  std::cout << std::endl;

  ShrubberyCreationForm shrubbery("test");
  PresidentialPardonForm presidental("test");
  RobotomyRequestForm robotomy("test");


  std::cout << shrubbery << std::endl;
  std::cout << presidental << std::endl;
  std::cout << robotomy << std::endl;
  
  std::cout << std::endl;

  test.executeForm(shrubbery);
  test.signForm(shrubbery);
  test.executeForm(shrubbery);

  std::cout << std::endl;

  test.executeForm(presidental);
  test.signForm(presidental);
  test.executeForm(presidental);

  std::cout << std::endl;

  test.executeForm(robotomy);
  test.signForm(robotomy);
  test.executeForm(robotomy);
  std::cout << std::endl;

  try {
      yongmipa.executeForm(shrubbery);
  } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
  }

  return (0);
}