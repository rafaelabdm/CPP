/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:45:01 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/12 19:10:50 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << GREEN << "[Dog]" << RESET_COLOR << " Default constructor called\n";
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog& a) : Animal()
{
	std::cout << GREEN << "[Dog]" << RESET_COLOR << " Copy constructor called\n";
	*this = a;
}

Dog::~Dog()
{
	std::cout << GREEN << "[Dog]" << RESET_COLOR << " Destructor called\n";
	delete brain;
}

Dog&	Dog::operator= (const Dog& a)
{
	std::cout << GREEN << "[Dog]" << RESET_COLOR << " Copy assingment constructor called\n";
	this->type = a.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "[Dog] Huf Huf!!\n";
}