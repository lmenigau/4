#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal() {
  this->type = "Cat";
  brain = new Brain();
  std::cout << "Cat alive\n";
}

Cat::~Cat() {
  delete brain;
  std::cout << "Cat dead\n";
}

Cat::Cat(Cat const &src) { *this = src; }
Cat &Cat::operator=(Cat const &src) {
  Animal::operator=(src);
  brain = src.brain;
  return *this;
}
void Cat::makeSound() const { std::cout << "miaou\n"; }
