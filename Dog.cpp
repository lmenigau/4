#include "Dog.hpp"

Dog::Dog() {
}
Dog::~Dog() {
}
Dog::Dog(Dog const& src) {
	*this = src;
}
Dog& Dog::operator=(Dog const& src) {
	// TODO
	static_cast<void>(src);
	return *this;
}
