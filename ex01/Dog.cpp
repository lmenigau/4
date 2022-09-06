#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
  this->type = "Dog";
  brain = new Brain();
  std::cout << "Dog alive\n";
}

Dog::~Dog() {
  delete brain;
  std::cout << "Dog is dead\n";
}

Dog::Dog(Dog const &src) { *this = src; }
Dog &Dog::operator=(Dog const &src) {
  Animal::operator=(src);
  return *this;
}
void Dog::makeSound() const { std::cout << "wouaf wouaf\n"; }
