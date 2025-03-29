/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:16:02 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/29 18:16:05 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria( "cure" ) {
	std::cout << "Cure default constructor called" << std::endl;
	return; 
}


Cure::Cure( Cure const &base ) : AMateria( "cure" ) {
	std::cout << "Cure copy constructor called" << std::endl;
	*this = base;
	return;
}

Cure &Cure::operator=( Cure const &other ) {
	std::cout << "Cure assignment operator called" << std::endl;
	if(this != &other)
		this->type = other.type;
	return (*this);
}

Cure::~Cure( void ) {
	std::cout << "Cure destructor called" << std::endl;
	return;
}

AMateria* Cure::clone( void ) const {
	Cure* newCure = new Cure( *this );
	return (newCure);
}

void		Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return;
}