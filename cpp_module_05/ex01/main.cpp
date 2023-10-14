#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
   try {
      Form test("hihi", 199, 45);
    } catch(const std::exception &e) {
      std::cout << e.what() << '\n';
    }

    try {
      Form test2("byebye", 24, 0);
    } catch(const std::exception &e) {
      std::cout << e.what() << '\n';
    }
    Bureaucrat jack("jack", 150);
    Bureaucrat holly("holly", 1);

    Form a("FormA", 150, 44);
    Form b("FormB", 119, 140);

    std::cout << jack << std::endl;
    std::cout << holly << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    jack.signForm(a);
    holly.signForm(a);
    jack.signForm(b);
    holly.signForm(b);
  return 0;
}