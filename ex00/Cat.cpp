#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal() {
  this->type = "Cat";
  std::cout << "Cat alive\n";
}
Cat::~Cat() { std::cout << "Cat dead\n"; }
Cat::Cat(Cat const &src) { *this = src; }
Cat &Cat::operator=(Cat const &src) {
  // TODO
  static_cast<void>(src);
  return *this;
}
void Cat::makeSound() const { std::cout << "miaou\n"; }
