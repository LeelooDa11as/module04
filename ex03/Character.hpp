/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:15:38 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/29 18:15:40 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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