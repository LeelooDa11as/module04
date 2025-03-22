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