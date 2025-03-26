#include "Character.hpp"

#define RESET  "\033[0m"  
#define GREEN  "\033[38;2;143;204;102m"
 
Character::Character( void ) : _name("Nameless") {
	std::cout << GREEN << "Character default constructor called" << RESET << std::endl;
	for (int i=0; i < 4; i++)
		this->_inventory[i] = NULL;
	return; 
}

Character::Character( std::string name ) : _name(name) {
	std::cout << GREEN << "Character constructor called" << RESET << std::endl;
	for (int i=0; i < 4; i++)
		this->_inventory[i] = NULL;
	return;
}

Character::Character( Character const &base ) {
	std::cout << GREEN << "Character copy constructor called" << RESET << std::endl;
	for (int i=0; i < 4; i++)
		this->_inventory[i] = NULL;
	*this = base;
	return;
}

Character &Character::operator=( Character const &other ) {
	std::cout << GREEN << "Character assignment operator called" << RESET << std::endl;
	if(this != &other) {
		this->_name = other._name;
		for (int i=0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (other._inventory[i])
					this->_inventory[i] = other._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character( void ) {
	std::cout << GREEN << "Character destructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++) {
		delete this->_inventory[i];
		this->_inventory[i] = NULL;
	}
	return;
}

std::string const& Character::getName( void ) const {
	return(this->_name);
}

void Character::equip(AMateria* materia) {
	if (!materia)
	{
		std::cout << "Error: no AMateria" << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == materia)
		{
			std::cout << "AMateria is already equiped" << std::endl;
			return;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = materia;
			return;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4)
		this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}

std::string const & Character::getInventoryType(int idx) const {
	static const std::string emptyStr;

	if (this->_inventory[idx])
		return (this->_inventory[idx]->getType());
	return emptyStr;
}