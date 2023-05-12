/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 10:19:58 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/12 11:19:49 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << YELLOW << "[WrongAnimal class] Default constructor called\n" << RESET_COLOR;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& a)
{
	std::cout << YELLOW << "[WrongAnimal class] Copy constructor called\n" << RESET_COLOR;
	*this = a;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << YELLOW << "[WrongAnimal class] Default constructor called\n" << RESET_COLOR;
}

WrongAnimal&	WrongAnimal::operator= (const WrongAnimal& a)
{
	std::cout << YELLOW << "[WrongAnimal class] Copy assingment constructor called\n"  << RESET_COLOR;
	this->type = a.type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "[WrongAnimal] What does the WrongAnimal say?\n";
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}