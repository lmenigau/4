#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
    Brain *brain;
protected:
public:
  Cat();
  virtual ~Cat();
  Cat &operator=(Cat const &src);
  Cat(Cat const &src);

  void makeSound() const;
};

#endif // !CAT_HPP
