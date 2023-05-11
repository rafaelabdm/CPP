/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:09:24 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/11 17:59:50 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*SUBJECT MAIN*/

int	main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	return (0);
}


/*MY MAIN*/

// int	main(void)
// {
// 	Fixed a(10);
// 	Fixed const b(11.04f);
	
// 	//show values
// 	std::cout << "Value of a: " << a << std::endl;
// 	std::cout << "Value of const b: " << b << std::endl;

// 	//test arithmetic operators
// 	std::cout << "a + b = " << YELLOW << a + b << RESET_COLOR << std::endl;
// 	std::cout << "a - b = " << YELLOW << a - b << RESET_COLOR << std::endl;
// 	std::cout << "b - a = " << YELLOW << b - a << RESET_COLOR << std::endl;
// 	std::cout << "a * b = " << YELLOW << a * b << RESET_COLOR << std::endl;
// 	std::cout << "a / b = " << YELLOW << a / b << RESET_COLOR << std::endl;
	
// 	//show values (should remain unchanged)
// 	std::cout << "\nValue of a: " << a << std::endl;
// 	std::cout << "Value of const b: " << b << std::endl;
	
// 	//test comparison operators
// 	std::cout << std::boolalpha << "a == b? " << RED << (a == b) << RESET_COLOR << std::endl;
// 	std::cout << std::boolalpha << "a != b? " << GREEN << (a != b) << RESET_COLOR << std::endl;
// 	std::cout << std::boolalpha << "a < b? " << GREEN << (a < b) << RESET_COLOR << std::endl;
// 	std::cout << std::boolalpha << "a > b? " << RED << (a > b) << RESET_COLOR << std::endl;
// 	std::cout << std::boolalpha << "a >= b? " << RED << (a >= b) << RESET_COLOR << std::endl;
// 	std::cout << std::boolalpha << "a <= b? " << GREEN << (a <= b) << RESET_COLOR << std::endl;

// 	//test decrement
// 	std::cout << "\nValue of a after pre-decrement: " << YELLOW << --a << RESET_COLOR << std::endl;
// 	std::cout << "Value of a after pos-decrement: " << YELLOW << a-- << RESET_COLOR << std::endl;

// 	//test increment
// 	std::cout << "\nValue of a : " << a << std::endl;
// 	std::cout << "\nValue of a after pre-increment: " << YELLOW << ++a << RESET_COLOR << std::endl;
// 	std::cout << "Value of a after pos-increment: " << YELLOW << a++ << RESET_COLOR << std::endl;
	
// 	//test max and min functions
// 	std::cout << "\nValue of a : " << a << std::endl;
// 	std::cout << "Value of const b: " << b << std::endl;
// 	std::cout << "\nmax value: " << YELLOW << Fixed::max( a, b ) << RESET_COLOR << std::endl;
// 	std::cout << "min value: " << YELLOW << Fixed::min( a, b ) << RESET_COLOR << std::endl;

// 	return (0);
// }
