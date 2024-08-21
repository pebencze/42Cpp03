/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:27:38 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/21 14:39:54 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){

}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

}

FragTrap::FragTrap(FragTrap const & src){

}

FragTrap::~FragTrap(){

}

FragTrap & FragTrap::operator=(FragTrap const & rhs){

}

void FragTrap::highFivesGuys(void){

}

