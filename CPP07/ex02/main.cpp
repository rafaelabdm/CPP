/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 13:32:52 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/07 14:55:05 by rabustam         ###   ########.fr       */
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
		myArray.setItem(0, "Rafaela");
		std::cout << "myArray size = " << myArray.size() << "\n";
		std::cout << "myArray[0] = " << myArray[0] << "\n";
	}
	catch (Array<std::string>::OutOfBoundsException& e)
	{
		std::cout << e.what();
	}
	
	std::cout << YELLOW << "\n----------TEST 03: ASSINGMENT CONSTRUCTOR----------\n" << RESET_COLOR;
	try
	{
		Array<std::string> copyArray;
		Array<std::string> myArray(4);
		myArray.setItem(0, "Rafaela");
		myArray.setItem(1, "Denise");
		myArray.setItem(2, "Gabriela");
		myArray.setItem(3, "Leandro");
		
		copyArray = myArray;
		copyArray.setItem(0, "Thais");

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

	std::cout << YELLOW << "\n----------TEST 04: COPY CONSTRUCTOR----------\n" << RESET_COLOR;
	try
	{
		Array<int> myArray(4);
		myArray.setItem(0, 10);
		myArray.setItem(1, -99);
		myArray.setItem(2, 200);
		myArray.setItem(3, 0);
		
		Array<int>copyArray(myArray);
		copyArray.setItem(0, 2023);

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

	std::cout << YELLOW << "\n----------TEST 05: TESTING FLOAT----------\n" << RESET_COLOR;
	try
	{
		Array<float> myArray(4);
		myArray.setItem(0, 1.0);
		myArray.setItem(1, -9.9);
		myArray.setItem(2, 20.3333333);
		myArray.setItem(3, 0);
		
		for(unsigned int i = 0; i < myArray.size(); i++)
			std::cout << "myArray[" << i << "] = " << myArray[i] << "\n";
	}
	catch (Array<std::string>::OutOfBoundsException& e)
	{
		std::cout << e.what();
	}


	std::cout << RED << "\n[INFO]: Hey! Don't forget to run with valgrind: valgrind ./array ;D\n" << RESET_COLOR;
}