/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:52:00 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/12 23:01:09 by nomargen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.h"

ScavTrap::ScavTrap( std::string name ): ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;

    std::cout << "[ScavTrap] Default constructor was called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "[ScavTrap] Destructor was called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0)
	{
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else
	{
		std::cout << "ScavTrap " << name << " is out of energy!" << std::endl;
	}
}

void    ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}

