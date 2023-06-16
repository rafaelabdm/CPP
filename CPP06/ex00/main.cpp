/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:54:55 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/05 13:54:55 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << RED << "Usage: ./convert <string_to_convert>" << RESET_COLOR << std::endl;
		return (1);
	}

	// ScalarConverter foo; // -> this should not work cause is a static class

	try
	{
		ScalarConverter::convert(argv[1]);
	}
	catch (ScalarConverter::UnknownTypeException& e)
	{
		std::cout << e.what();
	}
	return (0);
}


//// TEST MAIN

// int	main (void)
// {
// 	const char*        char_tests[] = {"c", "#",  "", "-", "+","oi", NULL };
// 	const char*        int_tests[] = {"2147483648", "-2147483649", "42", "0", "-0", "+10", "127", "899", NULL };
// 	const char*        float_tests[] = {"-4.2f", "nanf", "-inff", "+inff", "1...0f", NULL };
// 	const char*        double_tests[] = {"1.1426576", "0.57463824344","4.2", "-4.2", "nan", "-inf", "+inf", "45.88", "1...0f", NULL };

// 	std::cout << INVERT_COLOR <<"----------CHAR TESTS----------" << RESET_COLOR << std::endl;
// 	for (int i = 0; char_tests[i]; i++)
// 	{
// 		std::cout << "[" << char_tests[i] << "]\n";
// 		try
// 		{
// 			ScalarConverter::convert(char_tests[i]);
// 		}
// 		catch ( ScalarConverter::UnknownTypeException& e)
// 		{
// 			std::cout << e.what();
// 		}
// 		std::cout << "\n\n";
// 	}

// 	std::cout << INVERT_COLOR <<"----------INT TESTS----------" << RESET_COLOR << std::endl;
// 	for (int i = 0; int_tests[i]; i++)
// 	{
// 		std::cout << "[" << int_tests[i] << "]\n";
// 		try
// 		{
// 			ScalarConverter::convert(int_tests[i]);
// 		}
// 		catch ( ScalarConverter::UnknownTypeException& e)
// 		{
// 			std::cout << e.what();
// 		}
// 		std::cout << "\n\n";
// 	}

// 	std::cout << INVERT_COLOR <<"----------FLOAT TESTS----------" << RESET_COLOR << std::endl;
// 	for (int i = 0; float_tests[i]; i++)
// 	{
// 		std::cout << "[" << float_tests[i] << "]\n";
// 		try
// 		{
// 			ScalarConverter::convert(float_tests[i]);
// 		}
// 		catch ( ScalarConverter::UnknownTypeException& e)
// 		{
// 			std::cout << e.what();
// 		}
// 		std::cout << "\n\n";
// 	}

// 	std::cout << INVERT_COLOR <<"----------DOUBLE TESTS----------" << RESET_COLOR << std::endl;
// 	for (int i = 0; double_tests[i]; i++)
// 	{
// 		std::cout << "[" << double_tests[i] << "]\n";
// 		try
// 		{
// 			ScalarConverter::convert(double_tests[i]);
// 		}
// 		catch ( ScalarConverter::UnknownTypeException& e)
// 		{
// 			std::cout << e.what();
// 		}
// 		std::cout << "\n\n";
// 	}
// 	return (0);
// }
