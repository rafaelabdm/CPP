/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 10:22:38 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/12 11:19:56 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << YELLOW << "[WrongCat class] Default constructor called\n" << RESET_COLOR;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& a) : WrongAnimal()
{
	std::cout << YELLOW << "[WrongCat class] Copy constructor called\n" << RESET_COLOR;
	*this = a;
}

WrongCat::~WrongCat()
{
	std::cout << YELLOW << "[WrongCat class] Destructor called\n" << RESET_COLOR;
}

WrongCat&	WrongCat::operator= (const WrongCat& a)
{
	std::cout << YELLOW << "[WrongCat class] Copy assingment constructor called\n" << RESET_COLOR;
	this->type = a.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miau!!\n";
}