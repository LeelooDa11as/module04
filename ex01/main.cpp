/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 16:37:23 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/29 17:03:43 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	std::cout << "\n----- Checking previous functions -----\n";
	const Animal*	meta = new Animal();
	const Animal*	animal_dog = new Dog();
	const Animal*	animal_cat = new Cat();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << animal_dog->getType() << " " << std::endl;
	std::cout << animal_cat->getType() << " " << std::endl;

	meta->makeSound();
	animal_dog->makeSound();
	animal_cat->makeSound();
	
	delete meta;
	delete animal_cat;
	delete animal_dog;
	

	std::cout << "\n----- Exercise array requirement -----\n";
	Animal *Animals[10];

	for (int i = 0; i < 5; i++)
		Animals[i] = new Dog();

	for (int i = 5; i < 10; i++)
		Animals[i] = new Cat();
	
	for (int i = 0; i < 10; i++)
		Animals[i]->makeSound();

	for (int i = 0; i < 10; i++)
		delete Animals[i];

	std::cout << "\n----- Checking brain deep memory dog -----\n";
	Dog  dog1;

	dog1.setIdea(0, "dog idea 1");
	std::cout << dog1.getIdea(0) << " " << std::endl;
	std::cout << dog1.getIdea(1) << " " << std::endl;
	
	Dog dog4;
	Dog dog2;
	dog2 = dog1;
	
	dog2.setIdea(1, "dog2 idea 1");
	std::cout << dog1.getIdea(0) << " " << std::endl;
	std::cout << dog1.getIdea(1) << " " << std::endl;
	std::cout << dog2.getIdea(0) << " " << std::endl;
	std::cout << dog2.getIdea(1) << " " << std::endl;
	
	Dog dog3(dog2);
	dog2.setIdea(0, "dog2 idea 2");
	dog3.setIdea(1, "dog3 idea 1");
	std::cout << dog2.getIdea(0) << " " << std::endl;
	std::cout << dog2.getIdea(1) << " " << std::endl;
	std::cout << dog3.getIdea(0) << " " << std::endl;
	std::cout << dog3.getIdea(1) << " " << std::endl;
	
	dog1.makeSound();
	
	std::cout << "\n----- Checking brain deep memory cat -----\n";
	Cat cat1;
	
	cat1.setIdea(0, "cat idea 1");
	std::cout << cat1.getIdea(0) << " " << std::endl;
	std::cout << cat1.getIdea(1) << " " << std::endl;
	
	Cat cat2;
	cat2 = cat1;
	
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
	
	cat1.makeSound();

	return (0);
}
