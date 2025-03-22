#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
    std::cout << "WrongCat class construcor" << std::endl;
	setType("WrongCat");
    return;
}

WrongCat &WrongCat::operator=( WrongCat const &other ) {
    std::cout << "WrongCat assignation constructor" << std::endl;
	if (this != &other)	{
		type = other.type;
	}
	return (*this);
}

WrongCat::WrongCat( const WrongCat &base ) {
	std::cout << "WrongCat copy construcor called" << std::endl;
	this->type = base.type;
	return;
}

WrongCat::~WrongCat( void ) {
    std::cout << "WrongCat class destructor" << std::endl;
    return;
}

void	WrongCat::makeSound( void ) const{
	std::cout << "Wrong meow meow" << std::endl;
	return;
}
