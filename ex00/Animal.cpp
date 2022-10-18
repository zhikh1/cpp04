/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:04:12 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/17 23:50:44 by nomargen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Animal.h"

Animal::Animal( void ): type( "Animal" )
{
    std::cout << "Animal " << this->type << " constructor was called" << std::endl;
}

Animal::Animal( std::string type ): type( type )
{
    std::cout << "Animal " << this->type << " constructor was called" << std::endl;
}

Animal::~Animal( void )
{
    std::cout << "Animal " << this->type << " destructor was called" << std::endl;
}

Animal::Animal( const Animal& other )
{
    std::cout << "Animal copy constructor was called" << std::endl;
    *this = other;
}

Animal& Animal::operator=( const Animal& other )
{
    std::cout << "Animal assignment operator was called" << std::endl;
    this->type = other.type;
    
    return (*this);
}

void Animal::makeSound( void ) const
{
    std::cout << "Animal random sound" << std::endl;
}

std::string    Animal::getType( void ) const
{
    return (this->type);
}