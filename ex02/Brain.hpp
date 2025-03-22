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