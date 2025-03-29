/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 17:08:01 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/29 17:08:03 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
	Brain( void );
	Brain( Brain const &base );
	Brain &operator=( Brain const &other );
	virtual ~Brain( void );

	void	setIdeas( int i, std::string idea );
	std::string	getIdeas( int i ) const;

	private:
	std::string	_ideas[100];
};

#endif