#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"


class Cure : public AMateria
{
	public:
	Cure( void );
	Cure( Cure const &copy );
	Cure &operator=( Cure const &base );
	~Cure( void );
	
	AMateria*	clone( void ) const;
	void		use(ICharacter& target);
};

#endif