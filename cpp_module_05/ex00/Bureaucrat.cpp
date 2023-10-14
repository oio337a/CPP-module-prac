#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("default"), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name), _grade(grade) {
  if (grade < 1)
    throw GradeTooHighException();
  else if (grade > 150)
    throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const &copy): _name(copy.getName()), _grade(copy.getGrade()) {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copy) {
  if (this != &copy) {
    this->_grade = copy.getGrade();
  }
  return *this;
}

const std::string &Bureaucrat::getName() const {
  return this->_name;
}

int Bureaucrat::getGrade() const {
  return this->_grade;
}

void Bureaucrat::incrementGrade() {
  if (this->_grade - 1 < 1)
    throw Bureaucrat::GradeTooHighException();
  else
    this->_grade--;
}

void Bureaucrat::decrementGrade() {
  if (this->_grade + 1 > 150)
    throw Bureaucrat::GradeTooLowException();
  else
    this->_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return "Grade is too low";
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat) {
  out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
  return out;
}

