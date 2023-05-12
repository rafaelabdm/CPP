/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:41:27 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/12 11:19:29 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << YELLOW << "[Cat class] Default constructor called\n" << RESET_COLOR;
	this->type = "Cat";

}

Cat::Cat(const Cat& a) : Animal()
{
	std::cout << YELLOW << "[Cat class] Copy constructor called\n" << RESET_COLOR;
	*this = a;

}

Cat::~Cat()
{
	std::cout << YELLOW << "[Cat class] Destructor called\n" << RESET_COLOR;
}

Cat&	Cat::operator= (const Cat& a)
{
	std::cout << YELLOW << "[Cat class] Copy assingment constructor called\n" << RESET_COLOR;
	this->type = a.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "[Cat] Miau!!\n";
}