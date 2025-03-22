/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:33:36 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/22 19:33:44 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
    public:
    Cat( void );
    Cat( Cat const &base);
    Cat &operator=( Cat const &other );
    ~Cat( void );

	void	makeSound( void )const;
};

#endif