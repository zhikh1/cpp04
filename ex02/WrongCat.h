/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:13:12 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/17 23:22:43 by nomargen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.h"

class WrongCat : public WrongAnimal
{
public:
    WrongCat( void );
    ~WrongCat( void );

    void   makeSound( void ) const;
};

#endif
