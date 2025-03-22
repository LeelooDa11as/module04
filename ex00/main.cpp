#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const Animal*		meta = new Animal();
	//const WrongAnimal*	w_cat= new WrongCat();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	const Cat		kitty;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	//std::cout << w_cat->getType() << " " << std::endl;
	std::cout << kitty.getType() << " " << std::endl;
	
	j->makeSound();
	i->makeSound();
	meta->makeSound();
	kitty.makeSound();
	//w_cat->makeSound();
	delete meta;
	//delete w_cat;
	delete j;
	delete i;
	return (0);
}
