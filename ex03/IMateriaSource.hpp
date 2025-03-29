/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:17:12 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/29 18:17:14 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"

class AMateria;

class   IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void        learnMateria(AMateria*) = 0;
        virtual AMateria*   createMateria(std::string const& type) = 0;
};

#endif