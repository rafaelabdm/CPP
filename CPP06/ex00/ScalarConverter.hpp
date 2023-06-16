/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:40:03 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/16 13:28:55 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <cmath>
# include <climits>
# include <cfloat>
# include "colors.hpp"

# define CHAR	1
# define INT	2
# define FLOAT	3
# define DOUBLE	4
# define ERROR	0

class ScalarConverter
{
	private:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter& a);
	ScalarConverter& operator= (const ScalarConverter& a);
	
	//helper functions
	static bool	is_all_digit(const std::string& input);
	static bool	is_all_digit_float(const std::string& input);
	static int	is_special_case(const std::string& input);

	//get type functions
	static bool	is_char(const std::string& input);
	static bool	is_int(const std::string& input);
	static bool	is_float(const std::string& input);
	static bool	is_double(const std::string& input);
	static int	get_input_type(const std::string& input);
	
	//conversion helpers
	static void	int_to_char(int value);
	static void	float_to_char(float value);
	static void	float_to_int(float value);
	static void	double_to_char(double value);
	static void	double_to_int(double value);
	
	//convertion functions
	static void	char_conversion(const std::string input);
	static void	int_conversion(const std::string input);
	static void	float_conversion(const std::string input);
	static void	double_conversion(const std::string& input);
	static void	impossible(void);
	
	public:
	static void	convert(const std::string input);

	class UnknownTypeException : public std::exception
	{
		public:
		const char * what() const throw();
	};
};

#endif
