#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal() { this->type = "WrongCat"; }
WrongCat::~WrongCat() { std::cout << "WrongCat dead\n"; }
WrongCat::WrongCat(WrongCat const &src) { *this = src; }
WrongCat &WrongCat::operator=(WrongCat const &src) {
  // TODO
  static_cast<void>(src);
  return *this;
}
void WrongCat::makeSound() const { std::cout << "miaou\n"; }
