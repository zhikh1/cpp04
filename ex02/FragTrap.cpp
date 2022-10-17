/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:00:47 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/17 21:07:17 by nomargen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.h"

FragTrap::FragTrap( std::string name ): ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;

    std::cout << "[FragTrap] Default constructor was called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "[FragTrap] Destructor was called" << std::endl;
}

void    FragTrap::highFive( void ) {
    if ( this->energyPoints > 0 ) {
        std::cout << "[FragTrap] " << name << " high fives to everybody!" << std::endl;
        this->energyPoints--;
    }
    else
    {
        std::cout << "[FragTrap] " << this->name << " is out of energy!" << std::endl;
    }
}
