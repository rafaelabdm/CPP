/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:13:03 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/13 13:45:35 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <climits>
# include <cstdlib>
# include <iostream>
# include <string>
# include <vector>

# define RESET_COLOR	"\033[0m"
# define INVERT_COLOR	"\033[7m"
# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
# define YELLOW			"\033[0;33m"
# define BLUE			"\033[0;34m"
# define MAGENTA		"\033[0;35m"
# define CYAN			"\033[0;36m"

class Span
{
	private:
	unsigned int		count;
	unsigned int		max_size;
	std::vector<int>    span_array;

	static int					random_number(void);

	public:
	Span();
	Span(unsigned int N);
	~Span();
	Span(const Span& a);
	Span& operator=(const Span& a);

	void				fillSpan(void);
	void				addNumber(int number);
	unsigned int		shortestSpan(void) const;
	unsigned int		longestSpan(void) const;

	class SpanIsFullException : public std::exception
	{
		public:
		const char* what(void) const throw();
	};

	class NotEnoughNumbersException : public std::exception
	{
		public:
		const char* what(void) const throw();
	};
};

#endif