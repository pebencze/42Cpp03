/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:24:14 by pbencze           #+#    #+#             */
/*   Updated: 2024/10/18 12:43:13 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
    ClapTrap Clappy("Clappy");
    ClapTrap Trappy("Trappy");

    ClapTrap Copy(Clappy);
    std::string name = "Copy";
    Copy.setName(name);
    std::cout << "New ClapTrap: " << Copy.getName() << std::endl;

    Clappy.attack("Trappy");
    Trappy.takeDamage(Clappy.getAttackDamage());

    Clappy.setAttackDamage(2);
    Clappy.attack("Trappy");
    Trappy.takeDamage(Clappy.getAttackDamage());
    Trappy.beRepaired(2);

    Clappy.setAttackDamage(10);
    Clappy.attack("Trappy");
    Trappy.takeDamage(Clappy.getAttackDamage());

    Clappy.setEnergypoints(0);
    Clappy.beRepaired(3);
    Clappy.attack("someone");

    Trappy.setHitPoints(0);
    Trappy.takeDamage(4);

    return 0;
}
