/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 13:32:52 by rabustam          #+#    #+#             */
/*   Updated: 2023/07/12 14:36:25 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "colors.hpp"

int main(void)
{
	std::cout << YELLOW << "----------TEST 01: OUT OF BOUNDS----------\n" << RESET_COLOR;
	try
	{
		Array<std::string> myArray;
		std::cout << "myArray size = " << myArray.size() << "\n";
		std::cout << myArray[0];
	}
	catch (Array<std::string>::OutOfBoundsException& e)
	{
		std::cout << e.what();
	}

	std::cout << YELLOW << "\n----------TEST 02: CORRECT INDEX----------\n" << RESET_COLOR;
	try
	{
		Array<std::string> myArray(1);
		myArray[0] = "Rafaela";
		std::cout << "myArray size = " << myArray.size() << "\n";
		std::cout << "myArray[0] = " << myArray[0] << "\n";
	}
	catch (Array<std::string>::OutOfBoundsException& e)
	{
		std::cout << e.what();
	}
	
	std::cout << YELLOW << "\n----------TEST 03: CORRECT INDEX CONST ARRAY----------\n" << RESET_COLOR;
	try
	{
		Array<const std::string> myArray(1);
		// myArray[0] = "Rafaela"; //this should not compile
		std::cout << "myArray size = " << myArray.size() << "\n";
		std::cout << "myArray[0] = [" << myArray[0] << "]\n";
	}
	catch (Array<std::string>::OutOfBoundsException& e)
	{
		std::cout << e.what();
	}
	
	std::cout << YELLOW << "\n----------TEST 04: ASSINGMENT CONSTRUCTOR----------\n" << RESET_COLOR;
	try
	{
		Array<std::string> copyArray;
		Array<std::string> myArray(4);
		myArray[0] = "Rafaela";
		myArray[1] = "Denise";
		myArray[2] = "Gabriela";
		myArray[3] = "Leandro";
		
		copyArray = myArray;
		copyArray[0] = "Thais";

		std::cout << BLUE << "\nCheck for deep copy...\n" << RESET_COLOR;
		for(unsigned int i = 0; i < copyArray.size(); i++)
			std::cout << "copyArray[" << i << "] = " << copyArray[i] << "\n";
		std::cout << "----------------------------------------\n";
		for(unsigned int i = 0; i < myArray.size(); i++)
			std::cout << "myArray[" << i << "] = " << myArray[i] << "\n";
	}
	catch (Array<std::string>::OutOfBoundsException& e)
	{
		std::cout << e.what();
	}

	std::cout << YELLOW << "\n----------TEST 05: COPY CONSTRUCTOR----------\n" << RESET_COLOR;
	try
	{
		Array<int> myArray(4);
		myArray[0] = 10;
		myArray[1] = -99;
		myArray[2] = 200;
		myArray[3] = 0;
		
		Array<int>copyArray(myArray);
		copyArray[0] = 2023;

		std::cout << BLUE << "\nCheck for deep copy...\n" << RESET_COLOR;
		for(unsigned int i = 0; i < copyArray.size(); i++)
			std::cout << "copyArray[" << i << "] = " << copyArray[i] << "\n";
		std::cout << "----------------------------------------\n";
		for(unsigned int i = 0; i < myArray.size(); i++)
			std::cout << "myArray[" << i << "] = " << myArray[i] << "\n";
	}
	catch (Array<int>::OutOfBoundsException& e)
	{
		std::cout << e.what();
	}

	std::cout << YELLOW << "\n----------TEST 06: TESTING FLOAT----------\n" << RESET_COLOR;
	try
	{
		Array<float> myArray(4);
		myArray[0] = 1.0;
		myArray[1] = -9.9;
		myArray[2] = 20.3333333;
		myArray[3] = 0;
		
		for(unsigned int i = 0; i < myArray.size(); i++)
			std::cout << "myArray[" << i << "] = " << myArray[i] << "\n";
	}
	catch (Array<float>::OutOfBoundsException& e)
	{
		std::cout << e.what();
	}


	std::cout << RED << "\n[INFO]: Hey! Don't forget to run with valgrind: valgrind ./array ;D\n" << RESET_COLOR;
}