#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class   MateriaSource : public IMateriaSource
{
    public:
		MateriaSource( void );
		MateriaSource ( MateriaSource const &base );
		MateriaSource &operator=( MateriaSource const &other );
		~MateriaSource( void );

        void        learnMateria(AMateria* materia);
        AMateria*   createMateria(std::string const& type);
	
	private:
		AMateria	*_inventory[4];
};

#endif