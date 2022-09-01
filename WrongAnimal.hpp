#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <string>

class WrongAnimal {
private:
protected:
  std::string type;

public:
  WrongAnimal();
  virtual ~WrongAnimal();
  WrongAnimal &operator=(WrongAnimal const &src);
  WrongAnimal(WrongAnimal const &src);
  const std::string &getType() const;

  void makeSound() const;
};

#endif // !ANIMAL_HPP
