/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:38:59 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/18 22:19:01 by nomargen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.h"
#include "Cat.h"

#include "WrongCat.h"

int main(void)
{
    std::cout << "<-----------------1---------------->" << std::endl;
	const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;

    std::cout << "<-----------------2---------------->" << std::endl;
    Dog staticDog;
    Dog tmpDog = staticDog;

    std::cout << "<-----------------3---------------->" << std::endl;
    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

    std::cout << "<-----------------4---------------->" << std::endl;
	return (0);
}
