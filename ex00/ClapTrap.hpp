/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:24:12 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/19 09:18:13 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
  public:
    ClapTrap(); //default constructor
    ClapTrap(std::string name); //parameterized constructor
    ClapTrap(ClapTrap const &src); //copy constructor
    ~ClapTrap(); //destructor

    ClapTrap & operator=(ClapTrap const & rhs); //operator overload

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void setName(std::string & name);
    const std::string & getName() const ;
    void setAttackDamage(unsigned int points);
    unsigned int getAttackDamage() const;
    void setHitPoints(unsigned int points);
    unsigned int getHitPoints() const;
    void setEnergypoints(unsigned int points);
    unsigned int getEnergyPoints() const;

  private:
    std::string   _name;
    unsigned int  _hitPoints;
    unsigned int  _energyPoints;
    unsigned int  _attackDamage;
};

#endif