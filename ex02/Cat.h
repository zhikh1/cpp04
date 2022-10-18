/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:08:44 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/17 23:36:37 by nomargen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CAT_H
# define CAT_H

#include "Animal.h"

class Cat : public Animal
{
public:
    Cat( void );
    ~Cat( void );
    Cat( const Cat& src );
    Cat& operator=( const Cat& other );

    void   makeSound( void ) const;
private:
    Brain   *brain;
};

#endif