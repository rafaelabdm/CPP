/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:29:47 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/12 11:27:41 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << YELLOW << "[Animal class] Default constructor called\n" << RESET_COLOR;
	this->type = "Animal";
}

Animal::Animal(const Animal& a)
{
	std::cout << YELLOW << "[Animal class] Copy constructor called\n" << RESET_COLOR;
	*this = a;
}

Animal::~Animal(void)
{
	std::cout << YELLOW << "[Animal class] Destructor called\n" << RESET_COLOR;
}

Animal&	Animal::operator= (const Animal& a)
{
	std::cout << YELLOW << "[Animal class] Copy assingment constructor called\n" << RESET_COLOR;
	this->type = a.type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "[Animal] What does the Animal say?\n";
}

std::string	Animal::getType(void) const
{
	return (this->type);
}