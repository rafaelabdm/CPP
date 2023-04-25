/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:09:57 by rabustam          #+#    #+#             */
/*   Updated: 2023/04/25 10:28:54 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->value = 0;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called\n";
	this->value = n * (1 << this->bits);
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called\n";
	this->value = roundf(n * (1 << this->bits));
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

int	Fixed::getRawBits( void ) const
{
	return (this->value);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called\n";
	this->value = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->value / (float)(1 << this->bits));
}

int	Fixed::toInt( void ) const
{
	return (this->value / (1 << this->bits));
}

std::ostream& operator <<(std::ostream &out, const Fixed& fixed)
{
	std::cout << fixed.toFloat();
	return (out);
}