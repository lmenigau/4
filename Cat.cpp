#include "Cat.hpp"

Cat::Cat() {
}
Cat::~Cat() {
}
Cat::Cat(Cat const& src) {
	*this = src;
}
Cat& Cat::operator=(Cat const& src) {
	// TODO
	static_cast<void>(src);
	return *this;
}
