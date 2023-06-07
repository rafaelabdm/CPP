/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 20:48:05 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/07 09:23:17 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
	std::cout << YELLOW << "Default Constructor Called" << RESET_COLOR << std::endl;
}

Data::Data(int b)
{
	std::cout << YELLOW << "[Data] Constructor Called" << RESET_COLOR << std::endl;
	this->i = b;
}

Data::~Data()
{
	std::cout << YELLOW << "[Data] Destructor Called" << RESET_COLOR << std::endl;
}

Data::Data(const Data& a)
{
	std::cout << YELLOW << "[Data] Copy Constructor Called" << RESET_COLOR << std::endl;
	*this = a;
}

Data& Data::operator=(const Data& a)
{
	std::cout << YELLOW << "[Data] Assingment Constructor Called" << RESET_COLOR << std::endl;
	if (this != &a)
		this->i = a.i;
	return (*this);
}

bool Data::operator==(const Data& a) const
{
	if (this->i == a.i)
		return (true);
	return (false);
}


int	Data::getInteger(void) const
{
	return this->i;
}

void	Data::setInteger(int new_i)
{
	this->i = new_i;
}