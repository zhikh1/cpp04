/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:11:14 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/17 23:22:42 by nomargen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "WrongAnimal.h"

WrongAnimal::WrongAnimal( void ): type( "WrongAnimal" ) {
    std::cout << "WrongAnimal constructor was called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ): type( type )
{
    std::cout << "WrongAnimal " << this->type << " constructor was called" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
    std::cout << "WrongAnimal destructor was called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other )
{
    std::cout << "WrongAnimal copy constructor was called" << std::endl;
    *this = other;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other )
{
    std::cout << "WrongAnimal assignment operator was called" << std::endl;
    
    this->type = other.type;
    return (*this);
}

void WrongAnimal::makeSound( void ) const
{
    std::cout << "WrongAnimal random sound" << std::endl;
}

std::string    WrongAnimal::getType( void ) const
{
    return (this->type);
}
