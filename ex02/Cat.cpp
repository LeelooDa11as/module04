#include "Cat.hpp"
#define RESET "\033[0m"  
#define PINK  "\033[38;2;218;24;132m" 

Cat::Cat( void ) : AAnimal() {
    std::cout << PINK <<"Cat default construcor called" << RESET <<std::endl;
	setType("Cat");
	this->_brain = new Brain();
    return;
}

Cat &Cat::operator=( Cat const &other ) {
    std::cout << PINK << "Cat copy assignment constructor called" << RESET << std::endl;
	if (this != &other)	{
		this->type = other.type;
		if (this->_brain)
			delete this->_brain;
		if (other._brain)
			this->_brain = new Brain(*other._brain);
		else
			this->_brain = NULL;
	}
	return (*this);
}

//initiating _brain to NULL is to prevent garbage memory, redundant but good practise
Cat::Cat( const Cat &base ) : AAnimal ( base ), _brain(NULL) {
	std::cout << PINK << "Cat copy construcor called" << RESET <<std::endl;
	//this->type = base.type;
	if (base._brain)
		this->_brain = new Brain( *base._brain );
	else
		this->_brain = NULL;
	return;
}

Cat::~Cat( void ) {
	delete this->_brain;
    std::cout << PINK << "Cat class destructor called" << RESET << std::endl;
    return;
}

void	Cat::makeSound( void ) const {
	std::cout << PINK << "Meow meow (feed me)" << RESET <<std::endl;
	return;
}

void	Cat::setIdea( int i, std::string idea ) {
	if (this->_brain) // redundant but just in case
		this->_brain->setIdeas(i, idea);
	return;
}

std::string	Cat::getIdea( int i ) const {
	if (this->_brain)
		return (this->_brain->getIdeas(i));
	return ("pointer is NULL");
}
