#include "Brain.hpp"

Brain::Brain()
{
  this->ideas = new std::string[100];

  for (int i = 0; i < 100; i++)
    this->ideas[i] = "idea";
  std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
  std::cout << "Brain copy constructor called" << std::endl;
  for (int i = 0; i < 100; i++)
    this->ideas[i] = copy.ideas[i];
}

Brain &Brain::operator=(const Brain &copy)
{
  std::cout << "Brain assignation operator called" << std::endl;
  if (this != &copy)
    for (int i = 0; i < 100; i++)
      this->ideas[i] = copy.ideas[i];
  return (*this);
}

Brain::~Brain()
{
  delete[] this->ideas;
  std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdeas(int index, std::string idea)
{
  this->ideas[index] = idea;
}

std::string Brain::getIdea(int i)
{
  return (this->ideas[i]);
}