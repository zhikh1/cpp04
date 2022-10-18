/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:10:34 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/18 22:02:08 by nomargen         ###   ########.fr       */
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
    Dog( const Dog& other );
    Dog& operator=( const Dog& other );

    void   makeSound( void ) const;
private:    
    Brain   *brain;
};

#endif