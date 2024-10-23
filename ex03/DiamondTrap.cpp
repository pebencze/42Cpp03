/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:44:24 by pbencze           #+#    #+#             */
/*   Updated: 2024/10/23 15:03:18 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(){
	this->_name = "DefaultDiamond";
	this->_energyPoints = 50;
	ClapTrap::_name = this->_name + "_clap_name";
	std::cout << "Diamondtrap default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(){
	this->_name = name;
	this->_energyPoints = 50;
	std::cout << "Diamondtrap parameterized constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other._name + "_clap_name"), ScavTrap(), FragTrap(){
	*this = other;
	std::cout << "Diamondtrap copy constructor called." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other){
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	std::cout << "Diamondtrap assigment operator called." << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap(){
	std::cout << "Diamondtrap destructor called." << std::endl;
}

void DiamondTrap::setName(std::string & name){
    this->_name = name;
	ClapTrap::_name = name + "_clap_name";
}

const std::string & DiamondTrap::getName() const{
    return _name;
}

void DiamondTrap::whoAmI(){
	std::cout << "Diamond name: " << this->_name
		<< ", Claptrap name: " << ClapTrap::_name << std::endl;
}

