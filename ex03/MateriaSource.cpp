/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:17:34 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/29 19:19:20 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
 
MateriaSource::MateriaSource( void ) {
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return; 
}

MateriaSource::MateriaSource( MateriaSource const &base ) {
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	*this = base;
	return;
}

MateriaSource &MateriaSource::operator=( MateriaSource const &other ) {
	std::cout << "MateriaSource assignment operator called" << std::endl;
	if(this != &other)
	{
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (other._inventory[i])
				this->_inventory[i] = other._inventory[i];
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource( void ) {
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
		
	}
	return;
}

//to keep in the inventory
void	MateriaSource::learnMateria( AMateria* materia) {
	if (!materia)
	{
		std::cout << "No Amateria passed as an argument" << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = materia;
			return;
		}
	}
	return;
}

AMateria*   MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
			return (0);
		if (this->_inventory[i]->getType() == type )
			return(this->_inventory[i]->clone());
	}
	return (0);
}

