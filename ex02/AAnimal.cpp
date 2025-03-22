#include "AAnimal.hpp"
#define RESET  "\033[0m"  
#define GREEN  "\033[38;2;143;204;102m"

AAnimal::AAnimal( void ) {
    std::cout << GREEN << "AAnimal default construcor" << RESET << std::endl;
	setType("AAnimal");
    return;
}

AAnimal &AAnimal::operator=( AAnimal const &other ) {
    std::cout << GREEN << "AAnimal assignation constructor" << RESET << std::endl;
	if (this != &other)	{
		type = other.type;
	}
	return (*this);
}

AAnimal::AAnimal( const AAnimal &base ) {
	std::cout << GREEN << " AAnimal copy construcor called" << RESET << std::endl;
	this->type = base.type;
	return;
}

AAnimal::~AAnimal( void ) {
    std::cout << GREEN << "AAnimal class destructor" << RESET << std::endl;
    return;
}

void	AAnimal::makeSound( void ) const {
	std::cout << GREEN << "AAnimal makes sound" << RESET << std::endl;
	return;
}

std::string	AAnimal::getType( void ) const {
	return (this->type);
}

void	AAnimal::setType( std::string typeValue ) {
	this->type = typeValue;
	return;
}
