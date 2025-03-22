/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:34:33 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/22 19:34:40 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#define RESET "\033[0m"  
#define ORANGE "\033[38;2;255;140;0m"

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal") {
    std::cout << ORANGE << "WrongAnimal default constructor called" << RESET << std::endl;
    return;
}

WrongAnimal &WrongAnimal::operator=( WrongAnimal const &other ) {
    std::cout << ORANGE << "WrongAnimal assignation operator called" << RESET << std::endl;
	if (this != &other)	{
		type = other.type;
	}
	return (*this);
}

WrongAnimal::WrongAnimal( const WrongAnimal &base ) : type(base.type) {
	std::cout << ORANGE << "WrongAnimal copy constructor called" << RESET << std::endl;
	return;
}

WrongAnimal::~WrongAnimal( void ) {
    std::cout << ORANGE << "WrongAnimal destructor called" << RESET << std::endl;
    return;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << ORANGE << "WrongAnimal makes sound" << RESET << std::endl;
	return;
}

std::string	WrongAnimal::getType( void ) const {
	return (this->type);
}

void	WrongAnimal::setType( std::string typeValue ) {
	this->type = typeValue;
	return;
}
