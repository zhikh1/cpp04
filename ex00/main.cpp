/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:38:59 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/12 21:45:32 by nomargen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.h"

int main(void)
{
	ClapTrap player1("Bob");
	ClapTrap player2("Martin");
	
	player1.attack("Martin");
	player2.beRepaired(3);
    for(int i = 0; i < 10; i++)
    {
    	player2.attack("Bob");
    }

	return 0;
}
