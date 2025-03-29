/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:32:37 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/29 16:18:14 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#define RESET  "\033[0m"  
#define GREEN  "\033[38;2;143;204;102m"

//---------------------------- Constructors and destrcutor -------------------------------
Animal::Animal( void ) {
    std::cout << GREEN << "Animal default constructor called" << RESET << std::endl;
	setType("Animal");
    return;
}

Animal &Animal::operator=( Animal const &other ) {
    std::cout << GREEN << "Animal copy  assignment operator called" << RESET << std::endl;
	if (this != &other)	{
		type = other.type;
	}
	return (*this);
}

Animal::Animal( const Animal &base ) {
	std::cout << GREEN << "Animal copy constructor called" << RESET << std::endl;
	this->type = base.type;
	return;
}

Animal::~Animal( void ) {
    std::cout << GREEN << "Animal destructor called" << RESET << std::endl;
    return;
}

//------------------------------- Functions --------------------------------------
 
void	Animal::makeSound( void ) const {
	std::cout << GREEN << "Animal makes sound" << RESET << std::endl;
	return;
}

std::string	Animal::getType( void ) const {
	return (this->type);
}

void	Animal::setType( std::string typeValue ) {
	this->type = typeValue;
	return;
}
