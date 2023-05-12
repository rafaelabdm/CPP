/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:21:27 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/12 13:05:06 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\n" << GREEN << "----------Right Animal Test----------\n" << RESET_COLOR;
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	dog->makeSound();
	cat->makeSound();
	animal->makeSound();
	
	delete animal;
	delete dog;
	delete cat;
	
	std::cout << "\n" << RED << "----------Wrong Animal Test----------\n" << RESET_COLOR;
	const WrongAnimal* wAnimal = new WrongAnimal();
	const WrongAnimal* wCat = new WrongCat();
	std::cout << wCat->getType() << " " << std::endl;
	wCat->makeSound();
	wAnimal->makeSound();

	delete wAnimal;
	delete wCat;
	
	std::cout << "\n" << GREEN << "----------More Tests----------\n" << RESET_COLOR;
	
	Cat c;
	Dog d;

	std::cout << "cat.Animal::getType() == " << c.Animal::getType() << "\n";
	std::cout << "cat.getType() == " << c.getType() << "\n";
	std::cout << "dog.getType() == " << d.getType() << "\n\n";

	c.Animal::makeSound();
	c.makeSound();
	d.makeSound();
	std::cout << "\n";
	return 0;
}
