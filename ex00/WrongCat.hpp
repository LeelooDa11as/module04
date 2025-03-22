/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:35:05 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/22 19:35:07 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
    WrongCat( void );
    WrongCat( WrongCat const &base);
    WrongCat &operator=( WrongCat const &other );
    ~WrongCat( void );

	void	makeSound( void )const;
};

#endif