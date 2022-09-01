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
    std::cout << "----------000000000---------------\n";
    const Animal *i = new Dog();
    std::cout << "i: " << i->getType() << '\n';
    i->makeSound(); // will output the cat sound!
    delete i;
    std::cout << "----------11111111----------------\n";
    const Animal *j = new Cat();
    std::cout << "j: " << j->getType() << '\n';
    i->makeSound();
    delete j;
  }
  std::cout << "------------2222222---------------\n";
  {

    const WrongAnimal *i = new WrongCat();
    std::cout << "i:" << i->getType() << '\n';
    i->makeSound(); // will output the cat sound!
    delete i;
  }
  std::cout << "------------333333333-------------\n";
  {
    Cat cat;
    Animal a = cat;
    std::cout << "a: " << a.getType() << '\n';
  }
}
