/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 17:07:09 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/29 17:07:11 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal
{
    public:
    AAnimal( void );
    AAnimal(AAnimal const &base);
    AAnimal &operator=( AAnimal const &other );
    virtual ~AAnimal( void );

	virtual void    makeSound( void ) const = 0; //fully virtual function
	std::string     getType( void ) const;
	void		    setType( std::string typeValue );

	protected:
	std::string	type;
};

#endif