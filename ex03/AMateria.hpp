#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "Character.hpp"

class ICharacter;
// class IMateriaSource;

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