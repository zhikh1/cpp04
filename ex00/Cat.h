/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:08:44 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/17 23:22:39 by nomargen         ###   ########.fr       */
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

    void   makeSound( void ) const;
};

#endif