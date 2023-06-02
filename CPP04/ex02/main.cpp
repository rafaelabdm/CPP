/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:21:27 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/02 17:13:31 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	// Animal test; //if you uncomment this line it should not compile
	Cat cat;
	Dog dog;

	std::cout << "Cat sound: ";
	cat.makeSound();
	std::cout << "Dog sound: ";
	dog.makeSound();

	std::cout << "Cat type: " << cat.getType() << "\n";
	std::cout << "Dog type: " << dog.getType() << "\n";

	
	return (0);
}
