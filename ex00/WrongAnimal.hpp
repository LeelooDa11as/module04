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