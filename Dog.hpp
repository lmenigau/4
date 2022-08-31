#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : Animal {
private:
protected:
public:
  Dog();
  virtual ~Dog();
  Dog &operator=(Dog const &src);
  Dog(Dog const &src);
};

#endif // !DOG_HPP
