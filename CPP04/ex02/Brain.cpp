/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:42:44 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/02 16:11:34 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << YELLOW << "[Brain]" << RESET_COLOR << " Default constructor called\n";
	for (int i = 0; i < 100; i++)
		ideas[i] = "...";
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

std::string	Brain::getIdea(int i) const
{
	return (this->ideas[i]);
}

void	Brain::setIdea(std::string idea)
{
	for (int i = 0; i < 100; i++)
	{
		if (!ideas[i].compare("..."))
		{
			this->ideas[i] = idea;
			break ;
		}
	}
}
