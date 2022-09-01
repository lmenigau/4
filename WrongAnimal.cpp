#include "WrongAnimal.hpp"
#include <iostream>
WrongAnimal::WrongAnimal() { std::cout << "WrongAnimal constructed\n"; }
WrongAnimal::~WrongAnimal() { std::cout << "WrongAnimal destructed\n"; }
WrongAnimal::WrongAnimal(WrongAnimal const &src) { *this = src; }
WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src) {
  // TODO
  static_cast<void>(src);
  return *this;
}

const std::string &WrongAnimal::getType() const { return type; }

void WrongAnimal::makeSound() const { std::cout << "Base WrongAnimal noise\n"; }
