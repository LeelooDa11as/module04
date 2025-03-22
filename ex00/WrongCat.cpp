/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:34:56 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/22 19:34:58 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal() {
    std::cout << "WrongCat default constructor called" << std::endl;
	setType("WrongCat");
    return;
}

WrongCat &WrongCat::operator=( WrongCat const &other ) {
    std::cout << "WrongCat assignment operator called" << std::endl;
	if (this != &other)	{
		type = other.type;
	}
	return (*this);
}

WrongCat::WrongCat( const WrongCat &base ) : WrongAnimal( base ) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	return;
}

WrongCat::~WrongCat( void ) {
    std::cout << "WrongCat class destructor called" << std::endl;
    return;
}

void	WrongCat::makeSound( void ) const{
	std::cout << "Wrong meow meow" << std::endl;
	return;
}
