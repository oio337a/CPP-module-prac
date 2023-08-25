#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
  Animal *animals[10];

  for (int i = 0; i < 5; i++)
    animals[i] = new Dog();
  for (int i = 5; i < 10; i++)
    animals[i] = new Cat();
  
  std::cout << "---------------------" << std::endl;

  Dog *dog = new Dog();
  std::string str = dog->getBrain()->getIdea(0);

  std::cout << "---------------------" << std::endl;

  std::cout << str << std::endl;

  dog->getBrain()->setIdeas(0, "new idea");
  std::cout << dog->getBrain()->getIdea(0) << std::endl;

  dog->getBrain()->setIdeas(1, "new idea 2");
  std::cout << dog->getBrain()->getIdea(1) << std::endl;
  std::cout << "---------------------" << std::endl;

  for (int i = 0; i < 10; i++)
    delete animals[i];

  return (0);
}