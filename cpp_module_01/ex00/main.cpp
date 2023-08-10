#include "Zombie.hpp"

int main(void)
{
  Zombie a("A");              // 생성자로 만들어서 stack에 저장
  Zombie *b = newZombie("B"); // newZombie 함수로 만들어서 heap에 저장

  // a
  a.announce();

  // b
  b->announce();
  delete b; // 소멸자 호출

  // c
  randomChump("c"); // 생성자 호출 후 announce() 호출 후 소멸자 호출
}