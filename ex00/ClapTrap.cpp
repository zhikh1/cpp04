/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:14:43 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/12 21:45:32 by nomargen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.h"

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default constructor was called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << "Copy constructor was called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator= (ClapTrap const &other)
{
	std::cout << "Assignement operator was called" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return(*this);	
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor was called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else
	{
		std::cout << "ClapTrap " << name << " is out of energy!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
		if (this->hitPoints > 0)
		{
			std::cout << "ClapTrap " << name << " takes " << amount << " damage!" << std::endl;
			this->hitPoints -= amount;
		}
		else
		{
			std::cout << "ClapTrap " << name << " is dead!" << std::endl;
		}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0)
	{
		std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points!" << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
	else
	{
		std::cout << "ClapTrap " << name << " is out of energy!" << std::endl;
	}
}
