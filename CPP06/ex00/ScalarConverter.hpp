/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:40:03 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/09 18:30:54 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <climits>
# include <float.h>
# include "colors.hpp"

# define FLOAT	1
# define DOUBLE	2
# define INT	3
# define CHAR	4
# define ERROR	0

template<typename T>
void toChar(T value)
{
	if ((value <= CHAR_MAX && value >= CHAR_MIN))
	{
		if (isprint(value))
			std::cout << "char: " << static_cast<char>(value) << std::endl;
		else
			std::cout << "char: non-displayable\n";
	}
	else
		std::cout << "char: impossible\n";
}

template<typename T>
void toInt(T value)
{
	if ((value <= INT_MAX && value >= INT_MIN))
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "int: impossible\n";
}

template<typename T>
void toFloat(T value)
{
	std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(value) << "f\n";
}

template<typename T>
void toDouble(T value)
{
	std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(value) << std::endl;
}

class ScalarConverter
{
	private:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter& a);
	ScalarConverter& operator= (const ScalarConverter& a);
	
	public:
	static int all_digit(std::string& str);
	static int check_special(std::string& str);
	static int check_input(std::string& str);
	static int check_int_overflow(std::string& str);
	static void char_convertion(std::string& str);
	static void int_convertion(std::string& str);
	static void float_convertion(std::string& str);
	static void double_convertion(std::string& str);
	static void	convert(std::string str_to_convert);

	class UnknownTypeException : public std::exception
	{
		public:
		const char * what()
		{
			return "\033[0;31mUnknownTypeException: Type not supported!\n\033[0m";
		}
	};
};

#endif
