/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:24:16 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/18 22:01:58 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _hitPoints(10), _energyPoints(10), _attackDamage(0){
    std::cout << "default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
    std::cout << "parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src){
    std::cout << "copy constructor called" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap(){
    std::cout << "destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs){
    std::cout << "assignment operator called" << std::endl;
     if (&rhs != this){ // check for self-asignment
        this->_attackDamage = rhs._attackDamage;
        this->_energyPoints = rhs._energyPoints;
        this->_hitPoints = rhs._hitPoints;
        this->_name = rhs._name;
    }
    return *this; // return *this to allow chaining of assignment
}

void ClapTrap::attack(const std::string& target){
    if (this->_energyPoints > 0 && this->_energyPoints > 0){
        std::cout << "ClapTrap " << this->_name << " attacks" << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;  
    } else {
        std::cout << "ClapTrap " << this->_name << " is unable to attack" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    if (this->_hitPoints > amount)
        this->_hitPoints -= amount;
    else if (this->_hitPoints == 0)
        std::cout << "ClapTrap " << this->_name << " is already dead" << std::endl;
    else {
        this->_hitPoints = 0;
        std::cout << "ClapTrap " << this->_name << " just died" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->_energyPoints > 0){
        this->_hitPoints += amount;
        this->_energyPoints--;  
    } else {
        std::cout << "ClapTrap " << this->_name << " is unable to be repaired" << std::endl;
    }
}