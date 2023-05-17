/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:42:44 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/17 10:43:24 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << YELLOW << "[Brain]" << RESET_COLOR << " Default constructor called\n";
}

Brain::~Brain(void)
{
	std::cout << YELLOW << "[Brain]" << RESET_COLOR << " Destructor called\n";
}

Brain::Brain(const Brain& a)
{
	std::cout << YELLOW << "[Brain] " << RESET_COLOR << "Copy constructor called\n";
	*this = a;
}

Brain& Brain::operator= (const Brain& a)
{
	std::cout << YELLOW << "[Brain]" << RESET_COLOR << " copy assingment constructor called\n";
	for (int i = 0; i < 100; i++)
		this->ideas[i] = a.ideas[i];
	return (*this);
}