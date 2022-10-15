/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:38:59 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/12 23:04:46 by nomargen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.h"
#include "ScavTrap.h"

int main( void )
{
    ScavTrap player1( "Bob" );
    ScavTrap player2( player1 );

    player1.attack( "the air" );
    player1.takeDamage( 10 );
    player1.beRepaired( 10 );
    player1.guardGate();

    return 0;
}