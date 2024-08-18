/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:24:16 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/18 20:17:47 by pbencze          ###   ########.fr       */
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
}

ClapTrap::~ClapTrap(){
    std::cout << "destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs){
    std::cout << "assignment operator called" << std::endl;
}

void ClapTrap::attack(const std::string& target){

    std::cout << "ClapTrap <name> attacks <target>, causing <damage> points of damage!" << std::endl;
    target.takeDamage(this->_attackDamage);
    this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount){
    this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
    this->_hitPoints += amount;
    this->_energyPoints--;
}