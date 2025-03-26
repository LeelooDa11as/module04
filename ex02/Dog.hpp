#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {

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