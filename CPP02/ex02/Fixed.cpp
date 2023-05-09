/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:09:57 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/09 12:22:51 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//cosnstructors/destructor
Fixed::Fixed()
{
	// std::cout << "Default constructor called\n";
	this->value = 0;
}

Fixed::Fixed(const int n)
{
	// std::cout << "Int constructor called\n";
	this->value = n * (1 << this->bits);
}

Fixed::Fixed(const float n)
{
	// std::cout << "Float constructor called\n";
	this->value = roundf(n * (1 << this->bits));
}

Fixed::Fixed(const Fixed&a)
{
	// std::cout << "Copy constructor called\n";
	*this = a;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called\n";
}


//operators
Fixed& Fixed::operator = (const Fixed&a)
{
	// std::cout << "Copy assignment operator called\n";
	if (&a != this)
		this->value = a.getRawBits();
	return (*this);
}

bool Fixed::operator == (const Fixed&a) const
{
	if (this->value == a.getRawBits())
		return(true);
	return (false);
}

bool Fixed::operator != (const Fixed&a) const
{
	if (this->value != a.getRawBits())
		return(true);
	return (false);
}

bool Fixed::operator > (const Fixed&a) const
{
	if (this->value > a.getRawBits())
		return(true);
	return (false); 
}

bool Fixed::operator < (const Fixed&a) const
{
	if (this->value < a.getRawBits())
		return(true);
	return (false); 
}

bool Fixed::operator >= (const Fixed&a) const
{
	if (this->value >= a.getRawBits())
		return(true);
	return (false); 
}

bool Fixed::operator <= (const Fixed&a) const
{
	if (this->value <= a.getRawBits())
		return(true);
	return (false); 
}

Fixed Fixed::operator + (const Fixed&a) const
{
	Fixed temp;
	temp.setRawBits((this->toFloat() + a.toFloat()) * (1 << this->bits));
	return(temp);
}

Fixed Fixed::operator - (const Fixed&a) const
{
	Fixed temp;
	temp.setRawBits((this->toFloat() - a.toFloat()) * (1 << this->bits));
	return(temp);
}

Fixed Fixed::operator * (const Fixed&a) const
{
	Fixed temp;
	temp.setRawBits((this->toFloat() * a.toFloat()) * (1 << this->bits));
	return(temp);
}

Fixed Fixed::operator / (const Fixed&a) const
{
	Fixed temp;
	if (a.getRawBits() != 0)
		temp.setRawBits((this->toFloat() / a.toFloat()) * (1 << this->bits));
	return(temp);
}

Fixed Fixed::operator ++ (int)
{
	Fixed temp;
	temp.setRawBits(this->value);
    this->value++;
	return (temp);
}

Fixed Fixed::operator -- (int)
{
	Fixed temp;
	temp.setRawBits(this->value);
    this->value--;
	return (temp);
}

Fixed Fixed::operator ++ (void)
{
	this->value++;
	return(*this);
}

Fixed Fixed::operator -- (void)
{
	this->value--;
	return(*this);
}

//member functions
int	Fixed::getRawBits( void ) const
{
	return (this->value);
}

void Fixed::setRawBits( int const raw )
{
	// std::cout << "setRawBits member function called\n";
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


//static methods
Fixed&   Fixed::min(Fixed& a, Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed&   Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed&   Fixed::max(Fixed& a, Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed&   Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}


//outside the class
std::ostream& operator <<(std::ostream &out, const Fixed& fixed)
{
	std::cout << fixed.toFloat();
	return (out);
}