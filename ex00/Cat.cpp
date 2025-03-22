/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:32:20 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/22 19:32:22 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#define RESET "\033[0m"  
#define PINK  "\033[38;2;218;24;132m" 

Cat::Cat( void ) : Animal() {
    std::cout << PINK <<"Cat default constructor called" << RESET <<std::endl;
	setType("Cat");
    return;
}

Cat &Cat::operator=( Cat const &other ) {
    std::cout << PINK << "Cat copy assignment operator called" << RESET << std::endl;
	if (this != &other)	{
		type = other.type;
	}
	return (*this);
}

Cat::Cat( const Cat &base ) : Animal (base) {
	std::cout << PINK << "Cat copy constructor called" << RESET <<std::endl;
	return;
}

Cat::~Cat( void ) {
    std::cout << PINK << "Cat destructor called" << RESET << std::endl;
    return;
}

void	Cat::makeSound( void ) const{
	std::cout << PINK << "Meow meow (feed me)" << RESET <<std::endl;
	return;
}
