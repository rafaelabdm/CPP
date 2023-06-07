/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:45:50 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/07 11:10:02 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << YELLOW << "Default Constructor Called!\n" << RESET_COLOR;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << YELLOW << "Destructor Called!\n" << RESET_COLOR;
}

ScalarConverter::ScalarConverter(const ScalarConverter& a)
{
	std::cout << YELLOW << "Copy Constructor Called!\n" << RESET_COLOR;
	*this = a;
}

ScalarConverter& ScalarConverter::operator= (const ScalarConverter& a)
{
	std::cout << YELLOW << "Assingment Constructor Called!\n" << RESET_COLOR;
	if (this != &a)
	{
		//don't have attributes to copy;
	}
	return (*this);
}


int ScalarConverter::all_digit(std::string& str)
{
	long unsigned int i = 0;

	if (str[0] == '+' || str[0] == '-')
		i++;
	if (!str[i])
		return (0);
	while (i < str.length())
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int ScalarConverter::check_special(std::string& str)
{
	if (!str.compare("nanf") || !str.compare("-inff") || !str.compare("+inff"))
		return (1);
	if (!str.compare("nan") || !str.compare("-inf") || !str.compare("+inf"))
		return (2);
	return (0);
}

int ScalarConverter::check_int_overflow(std::string& str)
{
	long int check = std::strtol(str.c_str(), NULL, 10);
	if (check <= INT_MAX && check >= INT_MIN)
		return (0);
	return (1);
}

int ScalarConverter::check_input(std::string& str)
{
	if (str.empty())
		return (0);
	
	int special = check_special(str);
	if (special)
		return (special);
	
	if (str.find(".") != std::string::npos && str.find("f") != std::string::npos)
		return (FLOAT);
	if (str.find(".") != std::string::npos)
		return (DOUBLE);
	if(all_digit(str))
	{
		if (check_int_overflow(str))
			return (DOUBLE);
		return(INT);
	}
	if(str.length() == 1 && std::isprint(str[0]))
		return(CHAR);

	return (0);
}

void ScalarConverter::char_convertion(std::string& str)
{
	char c_value = str[0];
	std::cout << YELLOW << "\nResult of convertion:" << RESET_COLOR << "\n";
	std::cout << "char: " << c_value << std::endl;
	toInt<char>(c_value);
	toFloat<char>(c_value);
	toDouble<char>(c_value);
}

void ScalarConverter::int_convertion(std::string& str)
{
	int i_value = std::atoi(str.c_str());
	std::cout << YELLOW << "\nResult of convertion:" << RESET_COLOR << "\n";
	toChar<int>(i_value);
	std::cout << "int: " << i_value << std::endl;
	toFloat<int>(i_value);
	toDouble<int>(i_value);
}

void ScalarConverter::float_convertion(std::string& str)
{
	float f_value = strtof(str.c_str(), NULL);
	std::cout << YELLOW << "\nResult of convertion:" << RESET_COLOR << "\n";
	toChar<float>(f_value);
	toInt<float>(f_value);
	std::cout << std::fixed << "float: " << f_value << "f\n";
	std::cout << std::fixed << "double: " << static_cast<double>(f_value) << std::endl;
}

void ScalarConverter::double_convertion(std::string& str)
{
	double d_value = std::strtod(str.c_str(), NULL);
	std::cout << YELLOW << "\nResult of convertion:" << RESET_COLOR << "\n";
	toChar<double>(d_value);
	toInt<double>(d_value);
	std::cout << std::fixed << "float: " << static_cast<float>(d_value)<< "f\n";
	std::cout << std::fixed << "double: " << d_value << std::endl;
}

void	ScalarConverter::convert(std::string str_to_convert)
{
	int type = check_input(str_to_convert);
	switch (type)
	{
		case FLOAT: float_convertion(str_to_convert); break ;
		case DOUBLE: double_convertion(str_to_convert); break ;
		case INT: int_convertion(str_to_convert); break ;
		case CHAR: char_convertion(str_to_convert); break ;
		default: throw UnknownTypeException();
	}
}
