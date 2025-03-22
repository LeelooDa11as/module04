#include "Cat.hpp"
#define RESET "\033[0m"  
#define PINK  "\033[38;2;218;24;132m" 

Cat::Cat( void ) {
    std::cout << PINK <<"Cat class construcor" << RESET <<std::endl;
	setType("Cat");
    return;
}

Cat &Cat::operator=( Cat const &other ) {
    std::cout << PINK << "Cat assignation constructor" << RESET << std::endl;
	if (this != &other)	{
		type = other.type;
	}
	return (*this);
}

Cat::Cat( const Cat &base ) {
	std::cout << PINK << "Cat copy construcor called" << RESET <<std::endl;
	this->type = base.type;
	return;
}

Cat::~Cat( void ) {
    std::cout << PINK << "Cat class destructor" << RESET << std::endl;
    return;
}

void	Cat::makeSound( void ) const{
	std::cout << PINK << "Meow meow (feed me)" << RESET <<std::endl;
	return;
}
