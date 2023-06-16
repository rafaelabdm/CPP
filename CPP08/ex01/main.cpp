/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:25:48 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/13 13:58:05 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main(void)
{
	try
	{
		std::cout << YELLOW << "----------TEST 00: Subject Test----------\n" << RESET_COLOR;

		Span sp = Span(5);
		
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		std::cout << "Shorted Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Largest Span: " << sp.longestSpan() << std::endl;
	}
	catch (Span::SpanIsFullException& e)
	{
		std::cout << RED << e.what() << RESET_COLOR;
	}
	catch (Span::NotEnoughNumbersException& e)
	{
		std::cout << RED << e.what() << RESET_COLOR;
	}
	
	try
	{
		std::cout << YELLOW << "----------TEST 01: Test With Negative Numbers----------\n" << RESET_COLOR;

		Span sp = Span(5);
		
		sp.addNumber(10);
		sp.addNumber(-3);
		sp.addNumber(12);
		sp.addNumber(-98);
		sp.addNumber(0);
		
		std::cout << "Shorted Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Largest Span: " << sp.longestSpan() << std::endl;
	}
	catch (Span::SpanIsFullException& e)
	{
		std::cout << RED << e.what() << RESET_COLOR;
	}
	catch (Span::NotEnoughNumbersException& e)
	{
		std::cout << RED << e.what() << RESET_COLOR;
	}
	
	try
	{
		std::cout << YELLOW << "\n----------TEST 02: Add more than max size exception----------\n" << RESET_COLOR;
		
		Span test(3);
		
		test.addNumber(10);
		std::cout << "Number added!\n";
		test.addNumber(20);
		std::cout << "Number added!\n";
		test.addNumber(30);
		std::cout << "Number added!\n";
		test.addNumber(40);
		std::cout << "Number added!\n";
	}
	catch (Span::SpanIsFullException& e)
	{
		std::cout << RED << e.what() << RESET_COLOR;
	}
	catch (Span::NotEnoughNumbersException& e)
	{
		std::cout << RED << e.what() << RESET_COLOR;
	}

	try
	{
		std::cout << YELLOW << "\n----------TEST 03: Too few numbers to request a span exception----------\n" << RESET_COLOR;
		
		Span test(4);
		
		test.addNumber(10);
		std::cout << "Number added!\n";
		std::cout << "Shorted Span: " << test.shortestSpan() << std::endl;
		std::cout << "Largest Span: " << test.longestSpan() << std::endl;
	}
	catch (Span::SpanIsFullException& e)
	{
		std::cout << RED << e.what() << RESET_COLOR;
	}
	catch (Span::NotEnoughNumbersException& e)
	{
		std::cout << RED << e.what() << RESET_COLOR;
	}

	try
	{
		std::cout << YELLOW << "\n----------TEST 04: Shortest and Longest Span 10 Numbers----------\n" << RESET_COLOR;
		
		Span test(10);
	
		std::cout << GREEN << "Generating numbers...\n" << RESET_COLOR;
		test.fillSpan();
		std::cout << "\nShorted Span: " << test.shortestSpan() << std::endl;
		std::cout << "Largest Span: " << test.longestSpan() << std::endl;
	}
	catch (Span::SpanIsFullException& e)
	{
		std::cout << RED << e.what() << RESET_COLOR;
	}
	catch (Span::NotEnoughNumbersException& e)
	{
		std::cout << RED << e.what() << RESET_COLOR;
	}

	try
	{
		std::cout << YELLOW << "\n----------TEST 05: Shortest and Longest Span 1000 Numbers----------\n" << RESET_COLOR;
		
		Span test(1000);
	
		std::cout << GREEN << "Generating numbers...\n" << RESET_COLOR;
		test.fillSpan();
		std::cout << "\nShorted Span: " << test.shortestSpan() << std::endl;
		std::cout << "Largest Span: " << test.longestSpan() << std::endl;
	}
	catch (Span::SpanIsFullException& e)
	{
		std::cout << RED << e.what() << RESET_COLOR;
	}
	catch (Span::NotEnoughNumbersException& e)
	{
		std::cout << RED << e.what() << RESET_COLOR;
	}
	
	return (0);
}

