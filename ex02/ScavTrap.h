/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:52:14 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/13 22:12:02 by nomargen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap( std::string name );
    ~ScavTrap();

    void    attack(std::string const& target);
    void    guardGate();
};

#endif
