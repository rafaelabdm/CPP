/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:15:44 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/13 13:55:25 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : max_size(1), span_array(0)
{
	this->count = 0;
}

Span::Span(unsigned int N) : max_size(N), span_array(0)
{
	this->count = 0;
}

Span::~Span()
{
}

Span::Span(const Span& a)
{
	*this = a;
}

Span& Span::operator=(const Span& a)
{
	if (this != &a)
		this->max_size = a.max_size;
	return (*this);
}

void	Span::addNumber(int number)
{
	if (this->count == this->max_size)
		throw Span::SpanIsFullException();
	span_array.push_back(number);
	this->count++;
}

unsigned int	Span::shortestSpan(void) const
{
	if (span_array.size() < 2)
		throw Span::NotEnoughNumbersException();

	unsigned int min_distance = INT_MAX;

	for (size_t i = 0; i < span_array.size(); i++)
	{
		for (size_t j = i + 1; j < span_array.size(); j++)
		{
			unsigned int current_distance = std::abs(span_array[i] - span_array[j]);
			if (current_distance < min_distance)
				min_distance = current_distance;
		}
	}
	return (min_distance);
}

unsigned int	Span::longestSpan(void) const
{
	if (span_array.size() < 2)
		throw Span::NotEnoughNumbersException();

	unsigned int max_distance = 0;
	
	for (size_t i = 0; i < span_array.size(); i++)
	{
		for (size_t j = i + 1; j < span_array.size(); j++)
		{
			unsigned int current_distance = std::abs(span_array[i] - span_array[j]);
			if (current_distance > max_distance)
				max_distance = current_distance;
		}
	}
	return (max_distance);
}

int	Span::random_number(void)
{
	static time_t seed = 0;
	int n;
	
	if (seed == 0)
		time(&seed);
	srand (seed);
	n = rand() % 1000;
	seed += n;
	
	return (n);
}

void	Span::fillSpan(void)
{
	span_array.resize(max_size, 0);
	std::generate(span_array.begin(), span_array.end(), random_number);
	for (size_t i = 0; i < span_array.size(); i++)
	{
		std::cout << span_array[i] << " ";
	}
	std::cout << "\n";
}

const char* Span::SpanIsFullException::what(void) const throw()
{
	return "Exception: The span is full!\n";
}	

const char* Span::NotEnoughNumbersException::what(void) const throw()
{
	return "Exception: Can't find a span, too few numbers!\n";
}
