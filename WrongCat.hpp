#ifndef CAT_HPP
#define CAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

private:
protected:
public:
  WrongCat();
  virtual ~WrongCat();
  WrongCat &operator=(WrongCat const &src);
  WrongCat(WrongCat const &src);

  void makeSound() const;
};

#endif // !CAT_HPP
