#include "WrongAnimal.hpp"

#define RESET "\033[0m"  
#define ORANGE "\033[38;2;255;140;0m"

WrongAnimal::WrongAnimal( void ) {
    std::cout << ORANGE << "WrongAnimal class construcor" << RESET << std::endl;
	setType("WrongAnimal");
    return;
}

WrongAnimal &WrongAnimal::operator=( WrongAnimal const &other ) {
    std::cout << ORANGE << "WrongAnimal assignation constructor" << RESET << std::endl;
	if (this != &other)	{
		type = other.type;
	}
	return (*this);
}

WrongAnimal::WrongAnimal( const WrongAnimal &base ) {
	std::cout << ORANGE << "Copy construcor called" << RESET << std::endl;
	this->type = base.type;
	return;
}

WrongAnimal::~WrongAnimal( void ) {
    std::cout << ORANGE << "WrongAnimal class destructor" << RESET << std::endl;
    return;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << ORANGE << "WrongAnimal makes sound" << RESET << std::endl;
	return;
}

std::string	WrongAnimal::getType( void ) const {
	return (this->type);
}

void	WrongAnimal::setType( std::string typeValue ) {
	this->type = typeValue;
	return;
}
