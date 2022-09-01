#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal {
private:
protected:
public:
  Cat();
  virtual ~Cat();
  Cat &operator=(Cat const &src);
  Cat(Cat const &src);

  void makeSound() const;
};

#endif // !CAT_HPP
