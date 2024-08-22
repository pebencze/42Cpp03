/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:24:14 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/22 12:50:16 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(){

        std::string Diamond_name = "ParameterizedDiamond";
        std::string Assigned_name = "AssignedDiamond";
        
        DiamondTrap Default;
        DiamondTrap Parameterized(Diamond_name);
        DiamondTrap Assigned(Parameterized);

        Assigned.setName(Assigned_name);
        
        std::cout << std::endl; 
        std::cout << "New Diamondtrap: " << Default.getName() << " with "
                << Default.getHitPoints() << " hit points, "
                << Default.getEnergyPoints() << " energy points, "
                << Default.getAttackDamage() << " damage points"
                << std::endl;
        std::cout << "New Diamondtrap: " << Parameterized.getName() << " with "
                << Parameterized.getHitPoints() << " hit points, "
                << Parameterized.getEnergyPoints() << " energy points, "
                << Parameterized.getAttackDamage() << " damage points"
                << std::endl;
        std::cout << "New Diamondtrap: " << Assigned.getName() << " with "
                << Assigned.getHitPoints() << " hit points, "
                << Assigned.getEnergyPoints() << " energy points, "
                << Assigned.getAttackDamage() << " damage points"
                << std::endl;
                
        std::cout << std::endl;           
        Default.attack("someone");
        Parameterized.attack("someone");
        Assigned.attack("someone");
        std::cout << "New energy level: " << Assigned.getEnergyPoints() << std::endl;
        Assigned.beRepaired(20);
        std::cout << "New hitpoint value: " << Assigned.getHitPoints() << std::endl;
        std::cout << "New energy level: " << Assigned.getEnergyPoints() << std::endl;
        Assigned.takeDamage(20);
        std::cout << "New hitpoint value: " << Assigned.getHitPoints() << std::endl;
        std::cout << "Energy level: " << Assigned.getEnergyPoints() << std::endl;
        std::cout << std::endl; 

        Assigned.highFivesGuys();
        Assigned.guardGate();
        std::cout << std::endl;
        
        Parameterized.whoAmI();
        Default.whoAmI();
        Assigned.whoAmI();
        std::cout << std::endl; 
         
        return 0;
}
