#include "AMateria.hpp"

#define RESET  "\033[0m"  
#define GREEN  "\033[38;2;143;204;102m"
 
AMateria::AMateria( void ) {
	std::cout << GREEN << "Amateria default constructor called" << RESET << std::endl;
	return; 
}

AMateria::AMateria( std::string const &type ) {
	std::cout << GREEN << "Amateria constructor called" << RESET << std::endl;
	this->type = type;
	return;
}

AMateria::AMateria( AMateria const &base ) {
	std::cout << GREEN << "Amateria copy constructor called" << RESET << std::endl;
	if (this != &base)
		*this = base;
	return;
}

AMateria &AMateria::operator=( AMateria const &other ) {
	std::cout << GREEN << "Amateria assignment operator called" << RESET << std::endl;
	if(this != &other)
		this->type = other.type;
	return (*this);
}

AMateria::~AMateria( void ) {
	std::cout << GREEN << "Amateria destructor called" << RESET << std::endl;
	return;
}

std::string const& AMateria::getType( void ) const {
	return (this->type);
}

void	AMateria::use(ICharacter &target) {
	std::cout <<"* AMateria use" << target.getName() << " *" << std::endl;
}