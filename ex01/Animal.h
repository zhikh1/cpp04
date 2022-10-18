/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:04:25 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/17 23:30:36 by nomargen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include "Brain.h"

class Animal
{
public:
    Animal( void );
    Animal( std::string type );

    virtual ~Animal( void );

    Animal( const Animal& other );
    Animal& operator=( const Animal& other );

    std::string     getType( void ) const; 
    virtual void    makeSound( void ) const;
protected:
    std::string type;
};

#endif