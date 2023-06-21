/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:09:54 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/21 10:52:44 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>

int main () {
	std::cout << INVERT_COLOR << "----------INT VECTOR TESTS----------" << RESET_COLOR << std::endl;
	
	std::vector<int> int_vector(5);

	for (size_t i = 1; i <= int_vector.size(); i++)
		int_vector[i] = i;

	{
		std::cout << "\n" << YELLOW << "TEST 01: expect to find number 3." << RESET_COLOR << std::endl;
		try
		{
			std::vector<int>::iterator it = easyfind(int_vector, 3);
			std::cout << "Value [" << *it << "] found!\n";
		}
		catch (ValueNotFoundException& e)
		{
			std::cout << e.what();
		}
	}
	{
		std::cout << "\n" << YELLOW << "TEST 02: expect to not find the value." << RESET_COLOR << std::endl;
		try
		{
			std::vector<int>::iterator it = easyfind(int_vector, 9);
			std::cout << "Value [" << *it << "] found!\n";
		}
		catch (ValueNotFoundException& e)
		{
			std::cout << e.what();
		}
	}

	std::cout << INVERT_COLOR << "\n----------CHAR VECTOR TESTS----------" << RESET_COLOR << std::endl;
	
	std::vector<char> char_vector(5);
	int character = 'a';

	for (size_t i = 0; i < char_vector.size(); i++)
	{
		char_vector[i] = static_cast<char>(character);
		character++;
	}
		
	{
		std::cout << "\n" << YELLOW << "TEST 03: expect to find the char c." << RESET_COLOR << std::endl;
		try
		{
			std::vector<char>::iterator it = easyfind(char_vector, 'c');
			std::cout << "Value [" << *it << "] found!\n";
		}
		catch (ValueNotFoundException& e)
		{
			std::cout << e.what();
		}
	}
	{
		std::cout << "\n" << YELLOW << "TEST 04: expect to not find the value." << RESET_COLOR << std::endl;
		try
		{
			std::vector<char>::iterator it = easyfind(char_vector, 'f');
			std::cout << "Value [" << *it << "] found!\n";
		}
		catch (ValueNotFoundException& e)
		{
			std::cout << e.what();
		}
	}

	std::cout << INVERT_COLOR << "\n----------INT LIST TESTS----------" << RESET_COLOR << std::endl;

	std::list<int> int_list;

	for (size_t i = 1; i <= 4; i++)
		int_list.push_back(i);

	{
		std::cout << "\n" << YELLOW << "TEST 05: expect to find number 2" << RESET_COLOR << std::endl;
		try
		{
			std::list<int>::iterator it = easyfind(int_list, 2);
			std::cout << "Value [" << *it << "] found!\n";
		}
		catch (ValueNotFoundException& e)
		{
			std::cout << e.what();
		}
	}
	{
		std::cout << "\n" << YELLOW << "TEST 06: expect to not find the value." << RESET_COLOR << std::endl;
		try
		{
			std::list<int>::iterator it = easyfind(int_list, 6);
			std::cout << "Value [" << *it << "] found!\n";
		}
		catch (ValueNotFoundException& e)
		{
			std::cout << e.what();
		}
	}

	std::cout << INVERT_COLOR << "\n----------INT DEQUE TESTS----------" << RESET_COLOR << std::endl;

	std::deque<int> int_deque;

	for (size_t i = 1; i <= 4; i++)
		int_deque.push_back(i);

	{
		std::cout << "\n" << YELLOW << "TEST 07: expect to find number 1" << RESET_COLOR << std::endl;
		try
		{
			std::deque<int>::iterator it = easyfind(int_deque, 1);
			std::cout << "Value [" << *it << "] found!\n";
		}
		catch (ValueNotFoundException& e)
		{
			std::cout << e.what();
		}
	}
	{
		std::cout << "\n" << YELLOW << "TEST 08: expect to not find the value." << RESET_COLOR << std::endl;
		try
		{
			std::deque<int>::iterator it = easyfind(int_deque, 0);
			std::cout << "Value [" << *it << "] found!\n";
		}
		catch (ValueNotFoundException& e)
		{
			std::cout << e.what();
		}
	}

	std::cout << INVERT_COLOR << "\n----------INT SET TESTS----------" << RESET_COLOR << std::endl;

	std::set<int> int_set;

	for (size_t i = 1; i <= 4; i++)
		int_set.insert(i);

	{
		std::cout << "\n" << YELLOW << "TEST 07: expect to find number 4" << RESET_COLOR << std::endl;
		try
		{
			std::set<int>::iterator it = easyfind(int_set, 4);
			std::cout << "Value [" << *it << "] found!\n";
		}
		catch (ValueNotFoundException& e)
		{
			std::cout << e.what();
		}
	}
	{
		std::cout << "\n" << YELLOW << "TEST 08: expect to not find the value." << RESET_COLOR << std::endl;
		try
		{
			std::set<int>::iterator it = easyfind(int_set, -1);
			std::cout << "Value [" << *it << "] found!\n";
		}
		catch (ValueNotFoundException& e)
		{
			std::cout << e.what();
		}
	}
	return 0;
}