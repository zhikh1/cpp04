/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:08:19 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/18 22:02:09 by nomargen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.h"

Cat::Cat( void ): Animal("Cat")
{
    std::cout << this->type << " constructor was called" << std::endl;
    try {
        this->brain = new Brain();
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Memory Allocation is failed: " << e.what() << std::endl;
    }
}

Cat::~Cat( void )
{
    std::cout << this->type << " destructor was called" << std::endl;
    delete  this->brain;
}

void    Cat::makeSound( void ) const
{
    std::cout << "Meow!" << std::endl;
}

Cat::Cat( const Cat& other ): Animal()
{
    std::cout << "Cat copy constructor was called" << std::endl;
    *this = other;
}

Cat& Cat::operator=( const Cat& other )
{
    std::cout << "Cat copy operator was called" << std::endl;
    this->type = other.type;
    this->brain = new Brain( *other.brain );
    
    return (*this);
}