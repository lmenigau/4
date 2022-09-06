#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>

class Brain {
private:
  std::string ideas[100];

protected:
public:
  Brain();
  virtual ~Brain();
  Brain &operator=(Brain const &src);
  Brain(Brain const &src);
};

#endif // !BRAIN_HPP
