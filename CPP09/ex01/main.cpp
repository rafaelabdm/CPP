/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 09:25:26 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/28 19:11:10 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << YELLOW << "Usage: ./RPN < inverted Polish mathematical expression >" << RESET_COLOR << std::endl;
		std::cout << BLUE << "Example: " << RESET_COLOR << "./RPN \"8 9 * 9 - 9 - 9 - 4 - 1 +\"" << std::endl;
		return (0);
	}

	try
	{
		RPN			rpn(argv[1]);
	}
	catch (RPN::BadInputException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (RPN::DivideByZeroException& e)
	{
		std::cout << e.what() << std::endl;
	}
}


// // MY TESTS
// int	main(void)
// {
// 	std::cout << "\n" << INVERT_COLOR << "     MATH TESTS     " << RESET_COLOR << std::endl;

// 	try
// 	{
// 		std::string input =  "8 9 * 9 - 9 - 9 - 4 - 1 +";
		
// 		std::cout << YELLOW << "\nTEST [ " << input << " ]" << GREEN << " ( 42 )\n" << RESET_COLOR;
// 		RPN			rpn(input);
// 	}
// 	catch (RPN::BadInputException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	catch (RPN::DivideByZeroException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}

// 	try
// 	{
// 		std::string input =  "7 7 * 7 -";
		
// 		std::cout << YELLOW << "\nTEST [ " << input << " ]" << GREEN << " ( 42 )\n" << RESET_COLOR;
// 		RPN			rpn(input);
// 	}
// 	catch (RPN::BadInputException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	catch (RPN::DivideByZeroException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}

// 	try
// 	{
// 		std::string input =  "1 2 * 2 / 2 * 2 4 - +";
		
// 		std::cout << YELLOW << "\nTEST [ " << input << " ]" << GREEN << " ( 0 )\n" << RESET_COLOR;
// 		RPN			rpn(input);
// 	}
// 	catch (RPN::BadInputException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	catch (RPN::DivideByZeroException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}

// 	try
// 	{
// 		std::string input = " 3 ";
		
// 		std::cout << YELLOW << "\nTEST [ " << input << " ]" << GREEN << " ( 3 )\n" << RESET_COLOR;
// 		RPN			rpn(input);
// 	}
// 	catch (RPN::BadInputException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	catch (RPN::DivideByZeroException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}

// 	try
// 	{
// 		std::string input = "0 9 + 1 - 6 3 / -";
		
// 		std::cout << YELLOW << "\nTEST [ " << input << " ]" << GREEN << " ( 6 )\n" << RESET_COLOR;
// 		RPN			rpn(input);
// 	}
// 	catch (RPN::BadInputException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	catch (RPN::DivideByZeroException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
	
// 	try
// 	{
// 		std::string input = "0 9 + 9 - 6 3 * - 9 2 * +";
		
// 		std::cout << YELLOW << "\nTEST [ " << input << " ]" << GREEN << " ( 0 )\n" << RESET_COLOR;
// 		RPN			rpn(input);
// 	}
// 	catch (RPN::BadInputException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	catch (RPN::DivideByZeroException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
	

// 	std::cout << "\n" << INVERT_COLOR << "     ERROR HANDLING TESTS     " << RESET_COLOR << std::endl;
// 	try
// 	{
// 		std::string input = "(1 + 1)";
		
// 		std::cout << YELLOW << "\nTEST [ " << input << " ]" << RED << " ( ERROR )\n" << RESET_COLOR;
// 		RPN			rpn(input);
// 	}
// 	catch (RPN::BadInputException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	catch (RPN::DivideByZeroException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
	
// 	try
// 	{
// 		std::string input = "8 2 + 0 / 1 +";
		
// 		std::cout << YELLOW << "\nTEST [ " << input << " ]" << RED << " ( ERROR )\n" << RESET_COLOR;
// 		RPN			rpn(input);
// 	}
// 	catch (RPN::BadInputException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	catch (RPN::DivideByZeroException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}

// 	try
// 	{
// 		std::string input = "3 4 + + -";
		
// 		std::cout << YELLOW << "\nTEST [ " << input << " ]" << RED << " ( ERROR )\n" << RESET_COLOR;
// 		RPN			rpn(input);
// 	}
// 	catch (RPN::BadInputException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	catch (RPN::DivideByZeroException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
	
// 	try
// 	{
// 		std::string input = "3 + 0";
		
// 		std::cout << YELLOW << "\nTEST [ " << input << " ]" << RED << " ( ERROR )\n" << RESET_COLOR;
// 		RPN			rpn(input);
// 	}
// 	catch (RPN::BadInputException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	catch (RPN::DivideByZeroException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}

// 	try
// 	{
// 		std::string input = "3 8 9 - -";
		
// 		std::cout << YELLOW << "\nTEST [ " << input << " ]" << RED << " ( ERROR )\n" << RESET_COLOR;
// 		RPN			rpn(input);
// 	}
// 	catch (RPN::BadInputException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	catch (RPN::DivideByZeroException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}

// 	try
// 	{
// 		std::string input = "9 -";
		
// 		std::cout << YELLOW << "\nTEST [ " << input << " ]" << RED << " ( ERROR )\n" << RESET_COLOR;
// 		RPN			rpn(input);
// 	}
// 	catch (RPN::BadInputException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	catch (RPN::DivideByZeroException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}

//	try
// 	{
// 		std::string input = "8 9 * 9 - 9 - 9 - 4 - 1 + 3 2 *";
		
// 		std::cout << YELLOW << "\nTEST [ " << input << " ]" << RED << " ( ERROR )\n" << RESET_COLOR;
// 		RPN			rpn(input);
// 	}
// 	catch (RPN::BadInputException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	catch (RPN::DivideByZeroException& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	return (0);
// }
