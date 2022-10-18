/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:10:34 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/17 23:22:40 by nomargen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DOG_H
# define DOG_H

#include "Animal.h"

class Dog : public Animal
{
public:
    Dog( void );
    ~Dog( void );

    void   makeSound( void ) const;
};

#endif