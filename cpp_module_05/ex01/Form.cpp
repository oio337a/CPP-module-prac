#include "Form.hpp"

Form::Form(): _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {}

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute): _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
  if (gradeToSign < 1 || gradeToExecute < 1)
    throw GradeTooHighException();
  else if (gradeToSign > 150 || gradeToExecute > 150)
    throw GradeTooLowException();
}

Form::~Form() {}

Form::Form(Form const &copy): _name(copy.getName()), _signed(copy.getSigned()), _gradeToSign(copy.getGradeToSign()), _gradeToExecute(copy.getGradeToExecute()) {}

Form &Form::operator=(Form const &copy) {
  if (this != &copy) {
    this->_signed = copy.getSigned();
  }
  return *this;
}

const std::string &Form::getName() const {
  return this->_name;
}

bool Form::getSigned() const {
  return this->_signed;
}

int Form::getGradeToSign() const {
  return this->_gradeToSign;
}

int Form::getGradeToExecute() const {
  return this->_gradeToExecute;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
  if (bureaucrat.getGrade() > this->_gradeToSign)
    throw GradeTooLowException();
  else if (this->_signed)
    throw AlreadySignedException();
  else
    this->_signed = true;
}

const char *Form::GradeTooHighException::what() const throw() {
  return "Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw() {
  return "Grade is too low";
}

const char *Form::AlreadySignedException::what() const throw() {
  return "Form is already signed";
}

std::ostream& operator<<(std::ostream &out, const Form &obj) {
    out << obj.getName() << " Form sign is " << std::boolalpha << obj.getSigned() 

        << ", signGrade : " << obj.getGradeToSign() 
        << ", executeGrade : " << obj.getGradeToExecute()
        << std::endl;

    return out;
}