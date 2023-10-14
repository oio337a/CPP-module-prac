#include "Bureaucrat.hpp"

int main() {
  try {
    Bureaucrat a("a", 1);
    Bureaucrat b("b", 150);
    // Bureaucrat c("c", 151); // invalid grade
    // Bureaucrat d("d", 0);   // invalid grade
    Bureaucrat e("e", 2);

    std::cout << a << b << e;

    //=============================================

    // a.incrementGrade();   // invalid grade
    // std::cout << a;       

    // b.decrementGrade();   // invalid grade
    // std::cout << b;

    e.incrementGrade();
    std::cout << e;

    e.decrementGrade();
    std::cout << e;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  return 0;
}