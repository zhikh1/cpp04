/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:09:36 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/17 23:22:40 by nomargen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.h"

Dog::Dog( void ): Animal( "Dog" )
{
    std::cout << this->type << " constructor was called" << std::endl;
}

Dog::~Dog( void )
{
    std::cout << this->type << " destructor was called" << std::endl;
}

void    Dog::makeSound( void ) const
{
    std::cout << "Woof!" << std::endl;
}
