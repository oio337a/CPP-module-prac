#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
  const std::string _name;
  int _grade;
public:
  Bureaucrat(/* args */);
  ~Bureaucrat();
  Bureaucrat(const std::string &name, int grade);
  Bureaucrat(Bureaucrat const &copy);
  Bureaucrat &operator=(Bureaucrat const &copy);
  const std::string &getName() const;
  int getGrade() const;

  void incrementGrade();
  void decrementGrade();

  void signForm(Form &form);

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
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);


#endif