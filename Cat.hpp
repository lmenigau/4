#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : Animal {
private:
protected:
public:
  Cat();
  virtual ~Cat();
  Cat &operator=(Cat const &src);
  Cat(Cat const &src);
};

#endif // !CAT_HPP
