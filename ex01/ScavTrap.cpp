/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 10:20:08 by pbencze           #+#    #+#             */
/*   Updated: 2024/10/18 12:45:20 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap(){
    std::cout << "ScavTrap default constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    std::cout << "ScavTrap parameterized constructor called" << std::endl;
   _hitPoints = 100;
   _energyPoints = 50;
   _attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & src){
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs){
    std::cout << "ScavTrap assignment operator called" << std::endl;
    if (this != &rhs){
        _hitPoints = rhs._hitPoints;
        _attackDamage = rhs._attackDamage;
        _energyPoints = rhs._energyPoints;
        _name = rhs._name;
    }
    return (*this);
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target){
    if (this->_energyPoints > 0 && this->_hitPoints > 0){
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    } else {
        std::cout << "ScavTrap " << this->_name << " is unable to attack." << std::endl;
    }
}
