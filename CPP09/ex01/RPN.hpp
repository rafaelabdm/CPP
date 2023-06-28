/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 09:25:22 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/28 19:00:55 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <string>

# define RESET_COLOR	"\033[0m"
# define INVERT_COLOR	"\033[7m"
# define YELLOW			"\033[0;33m"
# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
# define BLUE			"\033[0;34m"

class RPN
{
	private:
	std::stack<char> _stack;

	void	initStack(std::string input);
	void	sum(int&result, int& n1, int& n2);
	void	subtract(int&result, int& n1, int& n2);
	void	multiply(int&result, int& n1, int& n2);
	void	divide(int&result, int& n1, int& n2);
	void	doOperation(int& result, int& n1, int& n2, char sign);
	void	doTheMath(void);

	public:
	RPN(void);
	RPN(std::string input);
	~RPN(void);
	RPN(const RPN& a);
	RPN& operator=(const RPN& a);

	class BadInputException : public std::exception
	{
		public:
		const char* what() const throw();
	};

	class DivideByZeroException : public std::exception
	{
		public:
		const char* what() const throw();
	};
};

#endif