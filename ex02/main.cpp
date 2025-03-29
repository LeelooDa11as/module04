/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 17:08:59 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/29 18:10:24 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    // Create objects of Cat and Dog
    Dog dog1;
    Cat cat1;
    Cat *cat = new Cat;
    //AAnimal lucy; //cannot be created, just to test

    // Set some ideas for both
    dog1.setIdea(0, "Chase a ball");
    dog1.setIdea(1, "Bark at the mailman");

    cat1.setIdea(0, "Climb a tree");
    cat1.setIdea(1, "Chase a mouse");

    // Output ideas for both animals
    std::cout << "Dog idea 1: " << dog1.getIdea(0) << std::endl;
    std::cout << "Dog idea 2: " << dog1.getIdea(1) << std::endl;

    std::cout << "Cat idea 1: " << cat1.getIdea(0) << std::endl;
    std::cout << "Cat idea 2: " << cat1.getIdea(1) << std::endl;

    // Test the copy constructor
    Dog dog2 = dog1;
    Cat cat2 = cat1;

    std::cout << "After copy constructor:" << std::endl;
    std::cout << "Dog 2 idea 1: " << dog2.getIdea(0) << std::endl;
    std::cout << "Cat 2 idea 1: " << cat2.getIdea(0) << std::endl;

    // Test the copy assignment operator
    Dog dog3;
    dog3 = dog1;
    Cat cat3;
    cat3 = cat1;

    std::cout << "After copy assignment:" << std::endl;
    std::cout << "Dog 3 idea 1: " << dog3.getIdea(0) << std::endl;
    std::cout << "Cat 3 idea 1: " << cat3.getIdea(0) << std::endl;

    // Make animals make sounds
    dog1.makeSound();
    cat1.makeSound();

    dog2.makeSound();
    cat2.makeSound();

    dog3.makeSound();
    cat3.makeSound();

    delete cat;
    //delete lucy;
    return 0;
}
