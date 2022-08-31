#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>

class Animal {
private:
protected:
  std::string type;

public:
  Animal();
  virtual ~Animal();
  Animal &operator=(Animal const &src);
  Animal(Animal const &src);
};

#endif // !ANIMAL_HPP
