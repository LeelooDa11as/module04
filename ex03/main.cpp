/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:17:19 by kkoval            #+#    #+#             */
/*   Updated: 2025/03/29 19:07:03 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
//#include "AMateria.hpp"
#include "MateriaSource.hpp"


int main() {
    // Test 1: Create MateriaSource, learn materias, and equip them
    std::cout << "=== Test 1 ===" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* player = new Character("Player");
    AMateria* tmp;

    tmp = src->createMateria("ice");
    player->equip(tmp);
    tmp = src->createMateria("cure");
    player->equip(tmp);

    // Using equipped materias
    ICharacter* target = new Character("Target");
    player->use(0, *target); // Using ice
    player->use(1, *target); // Using cure

    // Unequip and re-equip materias
    std::cout << "Unequipping and re-equipping materias..." << std::endl;
    player->unequip(1);
    tmp = src->createMateria("ice");
    player->equip(tmp); // Re-equip a new ice materia

    player->use(0, *target); // Using ice (should show ice effect)
    player->use(1, *target); // Should not do anything as materia 1 is unequipped

    delete target;
    delete player;
    delete src;

    // Test 2: Test with invalid index and using an empty slot
    std::cout << "=== Test 2 ===" << std::endl;
    src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    player = new Character("Player");
    tmp = src->createMateria("ice");
    player->equip(tmp);

    // Try using an invalid index
    player->use(10, *target);  // Should not do anything (invalid index)

    // Try using a slot with no materia
    player->unequip(0);
    player->use(0, *target);  // Should not do anything (empty slot)

    
    // Test 4: Test when inventory is full
    std::cout << "=== Test 4 ===" << std::endl;
    src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());  // Learning 4 materias

    player = new Character("Player");

    tmp = src->createMateria("ice");
    player->equip(tmp);
    tmp = src->createMateria("cure");
    player->equip(tmp);
    tmp = src->createMateria("ice");
    player->equip(tmp);
    tmp = src->createMateria("cure");
    player->equip(tmp);

    // Trying to equip another materia when inventory is full
    tmp = src->createMateria("ice");
    player->equip(tmp); // Should print "No more space in inventory"

    // Test 5: Test using materia after unequipping
    std::cout << "=== Test 5 ===" << std::endl;
    src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    player = new Character("Player");
    tmp = src->createMateria("ice");
    player->equip(tmp);
    tmp = src->createMateria("cure");
    player->equip(tmp);

    // Using materias before and after unequipping
    ICharacter* target2 = new Character("Target2");
    player->use(0, *target2);  // Using ice
    player->use(1, *target2);  // Using cure

    player->unequip(0);  // Unequip ice
    player->use(0, *target2);  // Should not do anything (ice unequipped)
    player->use(1, *target2);  // Should still work (cure is equipped)

    delete target2;
    delete player;
    delete src;

    return 0;
}
