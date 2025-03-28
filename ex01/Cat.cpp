/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 16:35:29 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/29 16:35:31 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#define RESET "\033[0m"  
#define PINK  "\033[38;2;218;24;132m" 

Cat::Cat( void ) : Animal() {
    std::cout << PINK <<"Cat default constructor called" << RESET <<std::endl;
	setType("Cat");
	this->_brain = new Brain();
    return;
}

Cat &Cat::operator=( Cat const &other ) {
    std::cout << PINK << "Cat copy assignment operator called" << RESET << std::endl;
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

Cat::Cat( const Cat &base ) : Animal( base ) {
	std::cout << PINK << "Cat copy construcor called" << RESET <<std::endl;
	if (base._brain)
		this->_brain = new Brain( *base._brain );
	else
		this->_brain = NULL;
	return;
}

Cat::~Cat( void ) {
	delete this->_brain;
    std::cout << PINK << "Cat destructor called" << RESET << std::endl;
    return;
}

void	Cat::makeSound( void ) const {
	std::cout << PINK << "Meow meow (feed me)" << RESET <<std::endl;
	return;
}

void	Cat::setIdea( int i, std::string idea ) {
	this->_brain->setIdeas(i, idea);
	return;
}

std::string	Cat::getIdea( int i ) const {
	return (this->_brain->getIdeas(i));
}