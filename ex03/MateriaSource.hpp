/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:17:42 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/29 18:17:44 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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