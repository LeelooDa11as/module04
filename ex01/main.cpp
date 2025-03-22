#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	/*const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	j->makeSound();
	i->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete meta;*/

	/*
	Animal *Animals[10];

	for (int i = 0; i < 5; i++)
		Animals[i] = new Dog();

	for (int i = 5; i < 10; i++)
		Animals[i] = new Cat();
	
	for (int i = 0; i < 10; i++)
		Animals[i]->makeSound();

	for (int i = 0; i < 10; i++)
		delete Animals[i];
	*/

	Dog dog1;

	dog1.setIdea(0, "dog idea 1");
	std::cout << dog1.getIdea(0) << " " << std::endl;
	std::cout << dog1.getIdea(1) << " " << std::endl;
	
	Dog dog4;
	Dog dog2;
	dog2 = dog4;
	
	dog2.setIdea(0, "dog2 idea 1");
	std::cout << dog1.getIdea(0) << " " << std::endl;
	std::cout << dog1.getIdea(1) << " " << std::endl;
	std::cout << dog2.getIdea(0) << " " << std::endl;
	std::cout << dog2.getIdea(1) << " " << std::endl;
	
	Dog dog3(dog2);
	//dog2.setIdea(0, "dog2 idea 2");
	dog3.setIdea(1, "dog3 idea 1");
	std::cout << dog2.getIdea(0) << " " << std::endl;
	std::cout << dog2.getIdea(-1) << " " << std::endl;
	std::cout << dog3.getIdea(0) << " " << std::endl;
	std::cout << dog3.getIdea(1) << " " << std::endl;
	
	dog1.makeSound();
	
		/*------------------------------------------*/
		/*Cat cat1;
	
		cat1.setIdea(0, "cat idea 1");
		std::cout << cat1.getIdea(0) << " " << std::endl;
		std::cout << cat1.getIdea(1) << " " << std::endl;
	
		Cat cat2 = cat1;
	
		cat2.setIdea(0, "cat2 idea 1");
		std::cout << cat1.getIdea(0) << " " << std::endl;
		std::cout << cat1.getIdea(1) << " " << std::endl;
		std::cout << cat2.getIdea(0) << " " << std::endl;
		std::cout << cat2.getIdea(1) << " " << std::endl;
	
		Cat cat3(cat2);
		cat2.setIdea(0, "cat2 idea 2");
		cat3.setIdea(0, "cat3 idea 1");
		std::cout << cat2.getIdea(0) << " " << std::endl;
		std::cout << cat2.getIdea(1) << " " << std::endl;
		std::cout << cat3.getIdea(0) << " " << std::endl;
		std::cout << cat3.getIdea(1) << " " << std::endl;
	
		cat1.makeSound();*/

	return (0);
}
