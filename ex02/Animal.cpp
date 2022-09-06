#include "Animal.hpp"
#include <iostream>
Animal::Animal() { std::cout << "Animal constructed\n"; }
Animal::~Animal() { std::cout << "Animal destructed\n"; }
Animal::Animal(Animal const &src) { *this = src; }
Animal &Animal::operator=(Animal const &src) {
  type = src.type;
  return *this;
}

const std::string &Animal::getType() const { return type; }

void Animal::makeSound() const { std::cout << "Base Animal noise\n"; }
