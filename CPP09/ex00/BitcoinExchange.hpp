/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 14:16:26 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/28 18:47:18 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <algorithm>
# include <fstream>
# include <iostream>
# include <map>
# include <string>

class BitcoinExchange
{
	private:
	std::map<std::string, double> _map;

	void		constructMap(void);
	double		getBottomDate(const std::string& targetDate) const;
	bool		isDate(std::string date) const;
	double		getValue(std::string line) const;
	std::string	getKey(std::string line) const;
	
	public:
	BitcoinExchange();
	~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& a);
	BitcoinExchange& operator=(const BitcoinExchange& a);
	
	void		searchDates(std::string file_name) const;

	class	CouldNotOpenFileException : public std::exception
	{
		public:
		const char* what() const throw();
	};

	class	NotAPositiveNumberException : public std::exception
	{
		public:
		const char* what() const throw();
	};

	class	TooLargeNumberException : public std::exception
	{
		public:
		const char* what() const throw();
	};

	class	BadInputException : public std::exception
	{
		public:
		const char* what() const throw();
	};
};

#endif /* BITCOINEXCHANGE_HPP */