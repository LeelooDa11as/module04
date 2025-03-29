/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:15:53 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/29 18:15:56 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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