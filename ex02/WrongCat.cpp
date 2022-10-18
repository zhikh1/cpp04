/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:12:48 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/17 23:22:43 by nomargen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "WrongCat.h"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
    std::cout << this->type << " constructor was called" << std::endl;
}

WrongCat::~WrongCat( void )
{
    std::cout << this->type << " destructor was called" << std::endl;
}

void    WrongCat::makeSound( void ) const
{
    std::cout << "Meow!" << std::endl;
}