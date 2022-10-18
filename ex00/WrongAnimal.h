/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:11:07 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/17 23:22:42 by nomargen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
public:
    WrongAnimal( void );
    WrongAnimal( std::string type );
    ~WrongAnimal( void );

    WrongAnimal( const WrongAnimal& other );
    WrongAnimal& operator=( const WrongAnimal& other );

    void            makeSound( void ) const;
    std::string     getType( void ) const; 
protected:
    std::string type;
};

#endif