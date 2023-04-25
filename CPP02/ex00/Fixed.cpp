/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:09:57 by rabustam          #+#    #+#             */
/*   Updated: 2023/04/24 19:29:52 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed&a)
{
	std::cout << "Copy constructor called\n";
	*this = a;
}

Fixed& Fixed::operator = (const Fixed&a)
{
	std::cout << "Copy assignment operator called\n";
	if (&a != this)
		this->value = a.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const //-> method will not modify any member variables of the class
{
	std::cout << "getRawBits member function called\n";
	return (this->value);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called\n";
	this->value = raw;
}