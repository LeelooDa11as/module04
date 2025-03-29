/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 19:34:08 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/29 16:14:50 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{	
	std::cout << "\n----- Creating Animals -----\n";
	const Animal		*meta = new Animal();
	const WrongAnimal	*w_cat= new WrongCat();
	const Animal		*animal_dog = new Dog();
	const Animal		*animal_cat = new Cat();
	const Cat			kitty;
	const Dog			doggy;
	const WrongCat		w_kitty;
	
	
	std::cout << "\n----- Checking Types -----\n";
	std::cout << animal_dog->getType() << " " << std::endl;
	std::cout << animal_cat->getType() << " " << std::endl;
	std::cout << w_cat->getType() << " " << std::endl;
	std::cout << kitty.getType() << " " << std::endl;
	std::cout << w_kitty.getType() << " " << std::endl;
	std::cout << doggy.getType() << " " << std::endl;

	

	

	std::cout << "\n----- Checking Sounds -----\n";
	animal_dog->makeSound();
	animal_cat->makeSound();
	meta->makeSound();
	kitty.makeSound();
	doggy.makeSound();
	w_cat->makeSound();
	w_kitty.makeSound();
	

    std::cout << "\n----- Copy Constructor Test -----\n";
    Dog dog1;
    Dog dog2(dog1);
    Cat cat1;
    Cat cat2(cat1);
	

    std::cout << "\n----- Assignment Operator Test -----\n";
    Dog dog3;
    dog3 = dog1;
    Cat cat3;
    cat3 = cat1;
	

    std::cout << "\n----- Cleaning Up -----\n";
    delete meta;
    delete animal_cat;
    delete animal_dog;
    delete w_cat;

    return 0;
}
