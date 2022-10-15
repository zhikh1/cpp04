/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:14:37 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/13 22:09:56 by nomargen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &other);
	ClapTrap &operator= (ClapTrap const &other);
	~ClapTrap();
	
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

protected:
	std::string	name;
	int			hitPoints;
	int			energyPoints;
	int			attackDamage;	
};

#endif
