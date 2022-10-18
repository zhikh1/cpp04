/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:08:19 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/17 23:22:39 by nomargen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.h"

Cat::Cat( void ): Animal("Cat")
{
    std::cout << this->type << " constructor was called" << std::endl;
}

Cat::~Cat( void )
{
    std::cout << this->type << " destructor was called" << std::endl;
}

void    Cat::makeSound( void ) const
{
    std::cout << "Meow!" << std::endl;
}
