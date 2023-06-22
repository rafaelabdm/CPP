/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 09:27:04 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/22 13:54:01 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void)
{
	
}

RPN::RPN(std::string input)
{
	initStack(input);
	doTheMath();
}

RPN::~RPN(void)
{
	
}

RPN::RPN(const RPN& a)
{
	*this = a;
}

RPN& RPN::operator=(const RPN& a)
{
	if (this != &a)
		this->_stack = a._stack;
	return (*this);
}

void	RPN::initStack(std::string input)
{
	std::string::reverse_iterator it;
	std::string valid_input;

	valid_input = " +-*/0123456789";
	for (it = input.rbegin(); it != input.rend(); it++)
	{
		if (valid_input.find(*it) == std::string::npos)
			throw BadInputException();
		if (*it != ' ')
			_stack.push(*it);
	}
}

void	RPN::sum(int&result, int& n1, int& n2)
{
	if (n2 == -1)
	{
		result += n1;
		n1 = -1;
	}
	else
	{
		n1 += n2;
		n2 = -1;
	}
}

void	RPN::subtract(int&result, int& n1, int& n2)
{
	if (n2 == -1)
	{
		result -= n1;
		n1 = -1;
	}
	else
	{
		n1 -= n2;
		n2 = -1;
	}
}

void	RPN::multiply(int&result, int& n1, int& n2)
{
	if (n2 == -1)
	{
		result *= n1;
		n1 = -1;
	}
	else
	{
		n1 *= n2;
		n2 = -1;
	}
}

void	RPN::divide(int&result, int& n1, int& n2)
{
	if (n2 == -1)
	{
		if (n1 == 0)
			throw DivideByZeroException();
		result /= n1;
		n1 = -1;
	}
	else
	{
		if (n2 == 0)
			throw DivideByZeroException();
		n1 /= n2;
		n2 = -1;
	}
}

void		RPN::doOperation(int& result, int& n1, int& n2, char sign)
{
	if (n1 == -1 && n2 == -1)
		throw BadInputException();

	if (sign == '+')
		sum(result, n1, n2);
	else if	(sign == '-')
		subtract(result, n1, n2);
	else if	(sign == '*')
		multiply(result, n1, n2);
	else
		divide(result, n1, n2);
}

void	RPN::doTheMath(void)
{
	unsigned int	count = 0;
	int				result = 0;
	int				n1 = -1;
	int				n2 = -1;

	while (!_stack.empty())
	{
		if (!std::isdigit(_stack.top()))
			doOperation(result, n1, n2, _stack.top());
		else if (count == 0)
			result = _stack.top() - 48;
		else if (n1 < 0)
			n1 = _stack.top() - 48;
		else
			n2 = _stack.top() - 48;
		_stack.pop();
		count++;
	}
	std::cout << "result: " << result << std::endl;
}

const char* RPN::BadInputException::what() const throw()
{
	return "Error: bad input.";
}

const char* RPN::DivideByZeroException::what() const throw()
{
	return "Error: you can not devite by zero.";
}