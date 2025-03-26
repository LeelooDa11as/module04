#include "Brain.hpp"
#define YELLOW "\033[1;33m"
#define RESET  "\033[0m" 

Brain::Brain( void ) {
	std::cout << YELLOW << "Brain constructor called" << RESET << std::endl;
	for (int i = 0; i < 100; i++){
		this->setIdeas(i, "empty");
	}
	return;
}

Brain::Brain( Brain const &base ) {
	std::cout << YELLOW << "Brain copy constructor called" << RESET << std::endl;
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = base._ideas[i];
	}
	return;
}

Brain	&Brain::operator=( Brain const &other ) {
	std::cout << YELLOW << "Brain copy assigment operator called" << RESET << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return *this;
}

Brain::~Brain( void ) {
	std::cout << YELLOW << "Brain destructor called" << RESET << std::endl;
	return;
}

void		Brain::setIdeas( int i, std::string idea ) {
	if (i >= 0 && i < 100)
		this->_ideas[i] = idea;
	return;
}

std::string	Brain::getIdeas( int i ) const {
	if (i >= 0 && i < 100)
		return (this->_ideas[i]);
	return ("out of reach index");
}