#include "Ice.hpp"

Ice::Ice( void ) : AMateria( "ice" ) {
	std::cout << "Ice default constructor called" << std::endl;
	return; 
}


Ice::Ice( Ice const &base ) : AMateria( "ice" ) {
	std::cout << "Ice copy constructor called" << std::endl;
	*this = base;
	return;
}

Ice &Ice::operator=( Ice const &other ) {
	std::cout << "Ice assignment operator called" << std::endl;
	if(this != &other)
		this->type = other.type;
	return (*this);
}

Ice::~Ice( void ) {
	std::cout << "Ice destructor called" << std::endl;
	return;
}

AMateria* Ice::clone( void ) const {
	Ice* newIce = new Ice( *this );
	return (newIce);
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return;
}