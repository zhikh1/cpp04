/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomargen <nomargen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:38:59 by nomargen          #+#    #+#             */
/*   Updated: 2022/10/18 21:47:17 by nomargen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.h"
#include "Cat.h"

#include "WrongCat.h"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

    delete  meta;
    delete  j;
    delete  i;

    std::cout << std::endl << "<---------------- Wrong Animal ---------------->" << std::endl;

    const WrongAnimal *wrongAnimal = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();

    std::cout << wrongAnimal->getType() << " " << std::endl;
    std::cout << wrongCat->getType() << " " << std::endl;
    wrongAnimal->makeSound();
    wrongCat->makeSound();

    delete  wrongAnimal;
    delete  wrongCat;

	return (0);
}
