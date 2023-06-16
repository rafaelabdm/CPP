/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:45:50 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/16 13:27:12 by rabustam         ###   ########.fr       */
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
	(void) a;
	return (*this);
}

const char * ScalarConverter::UnknownTypeException::what() const throw()
{
	return "\033[0;31mUnknownTypeException: Type not supported!\n\033[0m";
}

//helper functions
bool ScalarConverter::is_all_digit(const std::string& input)
{
	unsigned int i = 0;

	if (input[0] == '+' || input[0] == '-')
		i++;
	while (i < input.length())
	{
		if (!isdigit(input[i]))
			return (false);
		i++;
	}
	return (true);
}

bool ScalarConverter::is_all_digit_float(const std::string& input)
{
	unsigned int i = 0;

	if (input[0] == '+' || input[0] == '-')
		i++;
	while (i < input.length())
	{
		if (!isdigit(input[i]) && input[i] != '.' && input[i] != 'f')
			return (false);
		i++;
	}
	return (true);
}

int ScalarConverter::is_special_case(const std::string& input)
{
	if (!input.compare("-inff") || !input.compare("+inff") || !input.compare("nanf"))
		return (FLOAT);
	if (!input.compare("-inf") || !input.compare("+inf") || !input.compare("nan"))
		return (DOUBLE);
	return (ERROR);
}


//get type functions
bool ScalarConverter::is_char(const std::string& input)
{
	if (input.length() == 1 && std::isprint(input[0]) && !std::isdigit(input[0]))
		return (true);
	return (false);
}

bool ScalarConverter::is_int(const std::string& input)
{
	if (is_all_digit(input) && input.length() < 16)
		return (true);
	return (false);
}

bool ScalarConverter::is_float(const std::string& input)
{
	if (input.find('f') == std::string::npos)
		return (false);
	if (is_special_case(input) == FLOAT)
		return (true);
	return (is_all_digit_float(input) && input.find('.') <= 16);
}

bool ScalarConverter::is_double(const std::string& input)
{
	if (is_special_case(input) == DOUBLE)
		return (true);
	return (is_all_digit_float(input) && input.find('.') <= 16);
}

int	ScalarConverter::get_input_type(const std::string& input)
{
	if (input.empty())
		return (ERROR);
	if (is_char(input))
		return (CHAR);
	if (is_int(input))
		return (INT);
	if (is_float(input))
		return (FLOAT);
	if (is_double(input))
		return (DOUBLE);
	return (ERROR);
}


// check overflow
bool	check_int_overflow(const std::string& input)
{
	long int check = std::atol(input.c_str());

	if (check >= INT_MIN && check <= INT_MAX)
		return (true);
	std::cout << "char: impossible\n";
	std::cout << "int: impossible\n";
	std::cout << std::fixed << "float: " << static_cast<float>(check) << "f" << std::endl;
	std::cout << std::fixed << "double: " << static_cast<double>(check) << std::endl;
	
	return (false);
}

//	conversion functions

//		char convertions
void	ScalarConverter::char_conversion(const std::string input)
{
	char value = input[0];
	
	std::cout << "char: " << value << std::endl;
	std::cout << "int: " << static_cast<int>(value) << std::endl;
	std::cout << std::fixed << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << std::fixed << "double: " << static_cast<double>(value) << std::endl;
}

//		int convertions
void	ScalarConverter::int_to_char(int value)
{
	if (value < CHAR_MIN || value > CHAR_MAX)
		std::cout << "char: impossible\n";
	else if (std::isprint(value))
		std::cout << "char: " << static_cast<char>(value) << std::endl;
	else
		std::cout << "char: non displayable\n";
}

void	ScalarConverter::int_conversion(const std::string input)
{
	if (!check_int_overflow(input))
		return ;	
	int	value = std::atoi(input.c_str());

	int_to_char(value);	
	std::cout << "int: " << value << std::endl;
	std::cout << std::fixed << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << std::fixed << "double: " << static_cast<double>(value) << std::endl;
}

//		float converetions
void	ScalarConverter::float_to_char(float value)
{
	if (value < CHAR_MIN || value > CHAR_MAX || std::isnan(value) || std::isinf(value))
		std::cout << "char: impossible\n";
	else if (std::isprint(value))
		std::cout << "char: " << static_cast<char>(value) << std::endl;
	else
		std::cout << "char: non displayable\n";
}

void	ScalarConverter::float_to_int(float value)
{
	if (value < INT_MIN || value > INT_MAX || std::isnan(value) || std::isinf(value))
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;
}

void	ScalarConverter::float_conversion(const std::string input)
{

	float	value = std::strtof(input.c_str(), NULL);

	float_to_char(value);
	float_to_int(value);
	std::cout << std::fixed << "float: " << value << "f" << std::endl;
	std::cout << std::fixed << "double: " << static_cast<double>(value) << std::endl;
}


//	double conversion
void	ScalarConverter::double_to_char(double value)
{
	if (value < CHAR_MIN || value > CHAR_MAX || std::isnan(value) || std::isinf(value))
		std::cout << "char: impossible\n";
	else if (std::isprint(value))
		std::cout << "char: " << static_cast<char>(value) << std::endl;
	else
		std::cout << "char: non displayable\n";
}

void	ScalarConverter::double_to_int(double value)
{
	if (value < INT_MIN || value > INT_MAX || std::isnan(value) || std::isinf(value))
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;
}

void	ScalarConverter::double_conversion(const std::string& input)
{
	double value = std::strtod(input.c_str(), NULL);
	double_to_char(value);
	double_to_int(value);
	std::cout << std::fixed << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << std::fixed << "double: " << value << std::endl;
}

void ScalarConverter::impossible(void)
{
	std::cout << "char: impossible\n";
	std::cout << "int: impossible\n";
	std::cout << "float: impossible\n";
	std::cout << "double: impossible\n";
}

void	ScalarConverter::convert(const std::string input)
{
	int	type = get_input_type(input);
	
	switch (type)
	{
		case CHAR: char_conversion(input); break;
		case INT: int_conversion(input); break;
		case FLOAT: float_conversion(input); break;
		case DOUBLE: double_conversion(input); break;
		default : impossible();
	}
}
