/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 16:34:15 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/29 16:34:18 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    public:
    Animal( void );
    Animal(Animal const &base);
    Animal &operator=( Animal const &other );
    virtual ~Animal( void );

	virtual void    makeSound( void ) const;
	std::string     getType( void ) const;
	void		    setType( std::string typeValue );

	protected:
	std::string	type;
};

#endif