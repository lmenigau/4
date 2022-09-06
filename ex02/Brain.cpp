#include "Brain.hpp"
#include <iostream>

Brain::Brain() {}
Brain::~Brain() {}
Brain::Brain(Brain const &src) { *this = src; }
Brain &Brain::operator=(Brain const &src) {
  for (int i = 0; i < 100; i++)
    ideas[i] = src.ideas[i];
  std::cout << "deep copying\n";
  return *this;
}
