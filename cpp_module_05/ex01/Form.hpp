#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
private:
  const std::string _name;
  bool _signed;
  const int _gradeToSign;
  const int _gradeToExecute;

public:
  Form(/* args */);
  ~Form();
  Form(const std::string &name, int gradeToSign, int gradeToExecute);
  Form(Form const &copy);
  Form &operator=(Form const &copy);

  const std::string &getName() const;
  bool getSigned() const;
  int getGradeToSign() const;
  int getGradeToExecute() const;

  void beSigned(const Bureaucrat &obj);

  class GradeTooHighException : public std::exception
  {
    public:
      virtual const char* what() const throw();
  };

  class GradeTooLowException : public std::exception
  {
    public:
      virtual const char* what() const throw();
  };

  class AlreadySignedException : public std::exception
  {
    public:
      virtual const char* what() const throw();
  };
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif