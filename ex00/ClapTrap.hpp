/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:24:12 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/18 20:13:18 by pbencze          ###   ########.fr       */
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

  private:
    std::string   _name;
    unsigned int  _hitPoints;
    unsigned int  _energyPoints;
    unsigned int  _attackDamage;
};

#endif