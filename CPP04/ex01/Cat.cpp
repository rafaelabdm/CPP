/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:41:27 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/02 16:25:04 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << GREEN << "[Cat]" << RESET_COLOR << " Default constructor called\n";
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat& a) : Animal()
{
	std::cout << GREEN << "[Cat]" << RESET_COLOR << " Copy constructor called\n";
	*this = a;
}

Cat::~Cat()
{
	std::cout << GREEN << "[Cat]" << RESET_COLOR << " Destructor called\n";
	delete brain;
}

Cat&	Cat::operator= (const Cat& a)
{
	std::cout << GREEN << "[Dog]" << RESET_COLOR << " Copy assingment constructor called\n";
	this->type = a.type;
	this->brain = new Brain((const Brain&) a.brain);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "[Cat] Meow!!\n";
}
