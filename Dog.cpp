#include "Dog.hpp"
#include <iostream>
Dog::Dog() { this->type = "Dog"; }
Dog::~Dog() {}
Dog::Dog(Dog const &src) { *this = src; }
Dog &Dog::operator=(Dog const &src) {
  // TODO
  static_cast<void>(src);
  return *this;
}
void Dog::makeSound() const { std::cout << "wouaf wouaf\n"; }
