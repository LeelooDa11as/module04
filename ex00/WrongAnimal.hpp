/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:34:47 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/22 19:34:50 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    public:
    WrongAnimal( void );
    WrongAnimal(WrongAnimal const &base);
    WrongAnimal &operator=( WrongAnimal const &other );
    ~WrongAnimal( void );

	void		makeSound( void ) const;
	std::string	getType( void ) const;
	void		setType( std::string typeValue );

	protected:
	std::string	type;
};

#endif