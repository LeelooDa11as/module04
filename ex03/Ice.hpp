#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Amateria;

class Ice : public AMateria
{
	public:
	Ice(void);
	Ice(Ice const &copy);
	Ice &operator=(Ice const &base);
	~Ice(void);

	AMateria*	clone( void ) const;
	void		use(ICharacter& target);
};

#endif