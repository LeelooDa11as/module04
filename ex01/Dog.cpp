/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 16:36:22 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/29 16:36:26 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#define RESET "\033[0m"  
#define BLUE "\033[38;2;135;206;235m"

Dog::Dog( void ) :Animal() {
    std::cout << BLUE << "Dog default constructor called" << RESET <<std::endl;
	setType("Dog");
	this->_brain = new Brain();
    return;
}

Dog &Dog::operator=( Dog const &other ) {
    std::cout << BLUE << "Dog copy assignment operator called" << RESET << std::endl;
	if (this != &other)	{
		this->type = other.type;
		if (this->_brain)
			delete this->_brain;
		if (other._brain)
			this->_brain = new Brain (*other._brain);
		else
			this->_brain = NULL;
	}
	return *this;
}

Dog::Dog( const Dog &base ) : Animal( base ) {
	std::cout << BLUE << "Dog copy construcor called called" << RESET << std::endl;
	//this->type = base.type;
	if (base._brain)
		this->_brain = new Brain( *base._brain );
	else
		this->_brain = NULL;
	return;
}

Dog::~Dog( void ) {
	delete this->_brain;
    std::cout << BLUE << "Dog destructor called" << RESET <<std::endl;
    return;
}

void	Dog::makeSound( void ) const {
	std::cout << BLUE << "Woof woof (scrach my back)" << RESET << std::endl;
	return;
}

void	Dog::setIdea( int i, std::string idea ) {
	this->_brain->setIdeas(i, idea);
	return;
}

std::string	Dog::getIdea( int i ) const {
	return (this->_brain->getIdeas(i));
}
