/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 09:51:29 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/07 10:50:45 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

Base* generate(void)
{
	srand((unsigned) time(NULL));
	int choice = rand() % 3;

	if (choice == 0)
	{
		std::cout << "Generated Class A\n";
		return (new A);
	}
	if (choice == 1)
	{
		std::cout << "Generated Class B\n";
		return (new B);
	}
	std::cout << "Generated Class C\n";
	return (new C);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Class Pointer of Type A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "Class Pointer of Type B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "Class Pointer of Type C\n";
	else
		std::cout << "I don't have a clue of what type is this pointer you passed me...\n";
}

void identify(Base& p)
{
	try
	{
		A& cast = dynamic_cast<A&>(p);
		std::cout << "Class Reference of Type A\n";
		(void) cast;
	}
	catch (std::exception& e) {}
	
	try
	{
		B& cast = dynamic_cast<B&>(p);
		std::cout << "Class Reference of Type B\n";
		(void) cast;
	}
	catch (std::exception& e) {}

	try
	{
		C& cast = dynamic_cast<C&>(p);
		std::cout << "Class Reference of Type C\n";
		(void) cast;
	}
	catch (std::exception& e) 
	{
		std::cout << "I don't have a clue of what type is this pointer you passed me...\n";
	}

	
}