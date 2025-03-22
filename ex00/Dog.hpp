/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:33:57 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/22 19:33:59 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    public:
    Dog( void );
    Dog( Dog const &base);
    Dog &operator=( Dog const &other );
    ~Dog( void );

	void	makeSound( void ) const;
};

#endif