/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:32:12 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/22 19:32:15 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#define RESET "\033[0m"  
#define BLUE "\033[38;2;135;206;235m"

Dog::Dog( void ) : Animal() {
    std::cout << BLUE << "Dog default constructor called" << RESET <<std::endl;
	setType("Dog");
    return;
}

Dog &Dog::operator=( Dog const &other ) {
    std::cout << BLUE << "Dog copy assignment operator called" << RESET << std::endl;
	if (this != &other)	{
		type = other.type;
	}
	return (*this);
}

Dog::Dog( const Dog &base ) : Animal (base) {
	std::cout << BLUE << "Dog copy constructor called" << RESET << std::endl;
	return;
}

Dog::~Dog( void ) {
    std::cout << BLUE << "Dog destructor called" << RESET <<std::endl;
    return;
}

void	Dog::makeSound( void ) const {
	std::cout << BLUE << "Woof woof (scrach my back)" << RESET << std::endl;
	return;
}
