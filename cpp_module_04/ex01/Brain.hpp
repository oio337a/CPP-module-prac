#pragma once
#include <iostream>

class Brain {
  private:
    std::string ideas[100];
  public:
    Brain();
    Brain(const Brain &copy);
    Brain &operator=(const Brain &copy);
    ~Brain();

    void setIdeas(int index, std::string idea);
    std::string getIdea(int i);
};