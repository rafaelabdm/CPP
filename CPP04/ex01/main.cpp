/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:21:27 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/09 19:42:29 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	int		size = 4;
	Animal*	array[size];

	std::cout << "---------- Constructors ----------\n";
	for (int i = 0; i < size; i++)
	{
		if (i < (size / 2))
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	
	std::cout << "\n---------- Destructors ----------\n";
	for (int i = 0; i < size; i++)
		delete array[i];	


	std::cout << "\n---------- Deep Copy Tests ----------\n";
	Animal* dog = new Dog();
	Animal* cat = new Cat();
	Animal*	cat2 = cat;

	std::cout << "Dog " << dog->getType() << std::endl;
	std::cout << "Cat " << cat->getType() << std::endl;
	std::cout << "Cat2 " << cat2->getType() << std::endl;
	
	
	delete dog;
	delete cat;	
}
