#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() {
  {
    const Animal *meta = new Animal();
    meta->makeSound();
    delete meta;
    std::cout << "----------------------------------\n";
    const Animal *i = new Dog();
    std::cout << i->getType() << '\n';
    i->makeSound(); // will output the cat sound!
    delete i;
    std::cout << "----------------------------------\n";
    const Animal *j = new Cat();
    std::cout << j->getType() << '\n';
    i->makeSound();
    delete j;
  }
  std::cout << "----------------------------------\n";
  {

    const WrongAnimal *i = new WrongCat();
    std::cout << i->getType() << '\n';
    i->makeSound(); // will output the cat sound!
    delete i;
  }
  std::cout << "----------------------------------\n";
  {
    Cat cat;
    Animal a = cat;
    std::cout << a.getType() << '\n';
  }
}
