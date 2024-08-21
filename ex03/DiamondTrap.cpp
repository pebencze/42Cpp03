/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:44:24 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/21 19:24:35 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){

}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name") {
	// ClapTrap::_name = _name + "_clap_name";
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other){

}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other){

}

DiamondTrap::~DiamondTrap(){

}

void DiamondTrap::whoAmI(){

}

