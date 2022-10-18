/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:30:52 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/18 00:00:29 by nomargen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain
{
public:
    Brain( void );
    ~Brain( void );
    Brain( const Brain& other );
    Brain& operator=( const Brain& other );
private:
    std::string ideas[100];
};
 
#endif
