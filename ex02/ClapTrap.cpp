/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:24:16 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/19 10:51:03 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0){
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
    std::cout << "ClapTrap parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src){
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs){
    std::cout << "ClapTrap assignment operator called" << std::endl;
     if (&rhs != this){ // check for self-asignment
        this->_attackDamage = rhs._attackDamage;
        this->_energyPoints = rhs._energyPoints;
        this->_hitPoints = rhs._hitPoints;
        this->_name = rhs._name;
    }
    return *this; // return *this to allow chaining of assignment
}

void ClapTrap::attack(const std::string& target){
    if (this->_energyPoints > 0 && this->_hitPoints > 0){
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;  
    } else {
        std::cout << "ClapTrap " << this->_name << " is unable to attack." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    if (this->_hitPoints == 0)
        std::cout << "ClapTrap " << this->_name << " is already dead." << std::endl;
    else if (this->_hitPoints > amount){
        this->_hitPoints -= amount;
        std::cout << "ClapTrap " << this->_name << " lost " << amount << " hit points." << std::endl;
    }
    else {
        this->_hitPoints = 0;
        std::cout << "ClapTrap " << this->_name << " lost all hit points and died." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->_energyPoints > 0 && this->_hitPoints > 0){
        this->_hitPoints += amount;
        this->_energyPoints--;
        std::cout << "ClapTrap " << this->_name << " repaired itself, now it has " 
                  << amount << " more points." << std::endl;
    } else {
        std::cout << "ClapTrap " << this->_name << " is unable to be repaired." << std::endl;
    }
}

void ClapTrap::setName(std::string & name){
    this->_name = name;
}

const std::string & ClapTrap::getName() const {
    return (_name);
}

void ClapTrap::setAttackDamage(unsigned int points){
    this->_attackDamage = points;
}

unsigned int ClapTrap::getAttackDamage() const {
    return (this->_attackDamage);
}

void ClapTrap::setHitPoints(unsigned int points){
    this->_hitPoints = points;
}

unsigned int ClapTrap::getHitPoints() const {
    return (this->_hitPoints);
}

void ClapTrap::setEnergypoints(unsigned int points){
    this->_energyPoints = points;     
}

unsigned int ClapTrap::getEnergyPoints() const {
    return (this->_energyPoints);   
}