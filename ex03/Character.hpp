#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character: public ICharacter
{
	public:
		Character( void );
		Character ( std::string name );
		Character ( Character const &base );
		Character &operator=( Character const &other );
		~Character( void );

		void				equip( AMateria *materia );
		void				unequip( int idx );
		void				use( int idx, ICharacter& target );
		std::string const&	getName( void ) const;
		std::string const&	getInventoryType( int idx ) const;

	private:
		std::string	_name;
		AMateria	*_inventory[4];
};

#endif