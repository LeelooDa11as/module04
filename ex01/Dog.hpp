/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 16:35:58 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/29 16:36:01 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

    public:
    Dog( void );
    Dog( Dog const &base);
    Dog &operator=( Dog const &other );
    ~Dog( void );

	void	    makeSound( void ) const;
    void        setIdea( int i, std::string idea );
    std::string getIdea( int i ) const;

    private:
    Brain *_brain;
};

#endif