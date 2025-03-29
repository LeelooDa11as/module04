/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:14:45 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/29 18:14:48 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "Character.hpp"

class ICharacter;

class	AMateria {

	protected:
	std::string	type;

	public:
	AMateria( void );
	AMateria( std::string const &type );
	AMateria( AMateria const &base );
	AMateria &operator=( AMateria const &base );
	virtual ~AMateria( void );
	
	std::string const	&getType( void ) const; // Returns the materia type
	virtual AMateria*	clone( void ) const = 0;
	virtual void		use(ICharacter& target);

};

#endif