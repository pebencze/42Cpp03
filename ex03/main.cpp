/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:24:14 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/21 17:34:19 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(){
    ClapTrap Clappy("Clappy");
    ClapTrap Trappy("Trappy");
    std::cout << "New ClapTrap: " << Clappy.getName() << " with "
            << Clappy.getHitPoints() << " hit points, "
            << Clappy.getEnergyPoints() << " energy points, "
            << Clappy.getAttackDamage() << " damage points"
            << std::endl;

    ScavTrap Scavvy;
    ScavTrap SuperScav("SuperScav");
    std::string name = "Scavvy";
    Scavvy.setName(name);
    std::cout << "New ScavTrap: " << Scavvy.getName() << " with "
            << Scavvy.getHitPoints() << " hit points, "
            << Scavvy.getEnergyPoints() << " energy points, "
            << Scavvy.getAttackDamage() << " damage points "
            << std::endl;
    std::cout << "New ScavTrap: " << SuperScav.getName() << " with "
            << SuperScav.getHitPoints() << " hit points, "
            << SuperScav.getEnergyPoints() << " energy points, "
            << SuperScav.getAttackDamage() << " damage points"
            << std::endl;

    Scavvy.guardGate();
    Scavvy.attack(SuperScav.getName());
    Clappy.attack(SuperScav.getName());

	FragTrap Fraggy;
    FragTrap SuperFrag("SuperFrag");
    name = "Fraggy";
    Fraggy.setName(name);
    std::cout << "New FragTrap: " << Fraggy.getName() << " with "
            << Fraggy.getHitPoints() << " hit points, "
            << Fraggy.getEnergyPoints() << " energy points, "
            << Fraggy.getAttackDamage() << " damage points "
            << std::endl;
    std::cout << "New FragTrap: " << SuperFrag.getName() << " with "
            << SuperFrag.getHitPoints() << " hit points, "
            << SuperFrag.getEnergyPoints() << " energy points, "
            << SuperFrag.getAttackDamage() << " damage points"
            << std::endl;
	Fraggy.highFivesGuys();

    return 0;
}
