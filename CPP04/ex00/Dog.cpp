/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:45:01 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/12 11:19:35 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << YELLOW << "[Dog class] Default constructor called\n" << RESET_COLOR;
	this->type = "Dog";
}

Dog::Dog(const Dog& a) : Animal()
{
	std::cout << YELLOW << "[Dog class] Copy constructor called\n" << RESET_COLOR;
	*this = a;
}

Dog::~Dog()
{
	std::cout << YELLOW << "[Dog class] Destructor called\n" << RESET_COLOR;
}

Dog&	Dog::operator= (const Dog& a)
{
	std::cout << YELLOW << "[Dog class] Copy assingment constructor called\n" << RESET_COLOR;
	this->type = a.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "[Dog] Huf Huf!!\n";
}