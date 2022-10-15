/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:38:59 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/13 23:03:37 by nomargen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.h"

int main( void )
{
    FragTrap player1( "Bob" );
    FragTrap player2( player1 );

    player1.attack( "the air" );
    player1.takeDamage( 10 );
    player1.beRepaired( 10 );
    player1.highFive();

    return 0;
}