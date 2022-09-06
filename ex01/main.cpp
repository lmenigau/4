#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main() {
  Animal *farm[10];
  for (int i = 0; i < 10; i++) {
    if (i & 1)
      farm[i] = new Dog();
    else
      farm[i] = new Cat();
  }
  {
    std::cout << "_______\n";
    Cat a;
    Cat b;
    a = b;
  }
  std::cout << "_______\n";
  for (int i = 0; i < 10; i++)
    delete farm[i];
}
