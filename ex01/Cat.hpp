/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 16:34:59 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/29 16:35:02 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
    Cat( void );
    Cat( Cat const &base);
    Cat &operator=( Cat const &other );
    ~Cat( void );

	void	makeSound( void ) const;
    void	setIdea(int i, std::string idea);
	std::string	getIdea(int i) const;

    private:
    Brain *_brain;
};

#endif