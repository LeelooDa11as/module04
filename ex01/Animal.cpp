#include "Animal.hpp"
#define RESET  "\033[0m"  
#define GREEN  "\033[38;2;143;204;102m"

Animal::Animal( void ) {
    std::cout << GREEN << "Animal class constructor" << RESET << std::endl;
	setType("Animal");
    return;
}

Animal &Animal::operator=( Animal const &other ) {
    std::cout << GREEN << "Animal copy assignment operator called" << RESET << std::endl;
	if (this != &other)	{
		type = other.type;
	}
	return (*this);
}

Animal::Animal( const Animal &base ) {
	std::cout << GREEN << "Copy construcor called" << RESET << std::endl;
	this->type = base.type;
	return;
}

Animal::~Animal( void ) {
    std::cout << GREEN << "Animal destructor called" << RESET << std::endl;
    return;
}

void	Animal::makeSound( void ) const {
	std::cout << GREEN << "Animal makes sound" << RESET << std::endl;
	return;
}

std::string	Animal::getType( void ) const {
	return (this->type);
}

void	Animal::setType( std::string typeValue ) {
	this->type = typeValue;
	return;
}
