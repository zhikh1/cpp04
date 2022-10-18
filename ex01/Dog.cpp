/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:09:36 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/18 22:02:07 by nomargen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.h"

Dog::Dog( void ): Animal( "Dog" )
{
    std::cout << this->type << " constructor was called" << std::endl;
    try {
        this->brain = new Brain();
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Memory Allocation is failed: " << e.what() << std::endl;
    }
}

Dog::~Dog( void )
{
    std::cout << this->type << " destructor was called" << std::endl;
    delete  this->brain;
}

void    Dog::makeSound( void ) const
{
    std::cout << "Woof!" << std::endl;
}

Dog::Dog( const Dog& other ): Animal()
{
    std::cout << "Dog copy constructor was called." << std::endl;
    *this = other;
}

Dog& Dog::operator=( const Dog& other )
{
    std::cout << "Dog copy operator was called." << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        this->brain = new Brain( *other.brain );
    }
    return *this;
}
