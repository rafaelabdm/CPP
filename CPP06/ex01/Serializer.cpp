/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 20:06:46 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/06 21:06:04 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Default constructor called!\n";
}

Serializer::~Serializer()
{
	std::cout << "Destructor called!\n";	
}

Serializer::Serializer(const Serializer& a)
{
	std::cout << "Copy constructor called!\n";
	*this = a;
}

Serializer& Serializer::operator=(const Serializer& a)
{
	std::cout << "Assingment constructor called!\n";
	if (this != &a)
	{
		//no attributes to copy
	}
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t i = reinterpret_cast<uintptr_t&>(ptr);
	return (i);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data* i = reinterpret_cast<Data*>(raw);
	return (i);
}
