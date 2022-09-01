#include "Animal.hpp"
#include <iostream>
Animal::Animal() {}
Animal::~Animal() {}
Animal::Animal(Animal const &src) { *this = src; }
Animal &Animal::operator=(Animal const &src) {
  // TODO
  static_cast<void>(src);
  return *this;
}

const std::string &Animal::getType() const { return type; }

void Animal::makeSound() const { std::cout << "Base Animal noise\n"; }
