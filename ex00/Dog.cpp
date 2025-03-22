#include "Dog.hpp"
#define RESET "\033[0m"  
#define BLUE "\033[38;2;135;206;235m"

Dog::Dog( void ) {
    std::cout << BLUE << "Dog class construcor" << RESET <<std::endl;
	setType("Dog");
    return;
}

Dog &Dog::operator=( Dog const &other ) {
    std::cout << BLUE << "Dog assignation constructor" << RESET << std::endl;
	if (this != &other)	{
		type = other.type;
	}
	return (*this);
}

Dog::Dog( const Dog &base ) {
	std::cout << BLUE << "Dog copy construcor called" << RESET << std::endl;
	this->type = base.type;
	return;
}

Dog::~Dog( void ) {
    std::cout << BLUE << "Dog class destructor" << RESET <<std::endl;
    return;
}

void	Dog::makeSound( void ) const {
	std::cout << BLUE << "Woof woof (scrach my back)" << RESET << std::endl;
	return;
}