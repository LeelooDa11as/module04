/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 17:08:21 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/29 17:08:24 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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