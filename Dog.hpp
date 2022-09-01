#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal {
private:
  std::string type;

protected:
public:
  Dog();
  virtual ~Dog();
  Dog &operator=(Dog const &src);
  Dog(Dog const &src);

  void makeSound() const;
};

#endif // !DOG_HPP
