/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:16:55 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/29 18:16:58 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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