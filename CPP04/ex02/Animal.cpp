/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:29:47 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/17 10:32:56 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << RED << "[Animal]" << RESET_COLOR << " Default constructor called\n";
	this->type = "Animal";
}

Animal::Animal(const Animal& a)
{
	std::cout << RED << "[Animal]" << RESET_COLOR << " Copy constructor called\n";
	*this = a;
}

Animal::~Animal(void)
{
	std::cout << RED << "[Animal]" << RESET_COLOR << " Destructor called\n";
}

Animal&	Animal::operator= (const Animal& a)
{
	std::cout << RED << "[Animal]" << RESET_COLOR << " Copy assingment constructor called\n";
	this->type = a.type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}