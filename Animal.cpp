#include "Animal.hpp"

Animal::Animal() {
}
Animal::~Animal() {
}
Animal::Animal(Animal const& src) {
	*this = src;
}
Animal& Animal::operator=(Animal const& src) {
	// TODO
	static_cast<void>(src);
	return *this;
}
