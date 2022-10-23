/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:29:30 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/18 00:01:52 by nomargen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Brain.h"

Brain::Brain( void )
{
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = "None";
    }
    std::cout << "Brain constructor was called" << std::endl;
}

Brain::~Brain( void )
{
    std::cout << "Brain destructor was called" << std::endl;
}

Brain::Brain( const Brain& other )
{
    *this = other;
}

Brain& Brain::operator=( const Brain& other )
{
    std::cout << "Brain copy operator was called." << std::endl;
    if ( this != &other )
    {
        for ( int i = 0; i < 100; i++ )
        {
            this->ideas[i] = other.ideas[i];
        }
    }
    return (*this);
}