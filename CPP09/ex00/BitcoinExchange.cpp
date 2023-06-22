/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 22:16:45 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/22 15:09:21 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	this->constructMap();
}

BitcoinExchange::~BitcoinExchange()
{
	
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& a)
{
	if (this != &a)
		*this = a;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& a)
{
	this->_map = a._map;
	return (*this);
}


void	BitcoinExchange::constructMap(void)
{
	std::ifstream	data;
	std::string		line;

	data.open("data.csv", std::ifstream::in);
	if(data.is_open())
	{
		while(getline(data, line))
		{
			size_t	sep = line.find(',');
			_map[line.substr(0, sep)] = std::strtod(line.substr(sep + 1, line.size() - sep).c_str(), NULL);
		}
	}
	data.close();
}

double	BitcoinExchange::getBottomDate(const std::string& targetDate) const
{
	std::map<std::string, double>::const_iterator it = _map.lower_bound(targetDate);
	const std::string& returnedDate = it->first;

	if (it == _map.begin() || returnedDate == targetDate)
		return it->second;
	--it;
	return it->second;
}

bool	BitcoinExchange::isDate(std::string date) const
{
	if (date.size() != 10)
		return (false);
	if (date[5] != '0' && date[5] != '1')
		return (false);
	if (date[8] > '3' || date[8] < '0')
		return (false);
	for (size_t i = 0; i < date.size(); i++)
	{
		if (!std::isdigit(date[i]) && date[i] != '-')
			return (false);
	}
	return (true);
}

std::string	BitcoinExchange::getKey(std::string line) const
{
	size_t		sep;
	std::string	key;

	sep = line.find(" | ");
	if (sep == std::string::npos)
		throw BadInputException();
	key = line.substr(0, sep);
	if (isDate(key))
		return (key);
	throw BadInputException();
}

double	BitcoinExchange::getValue(std::string line) const
{
	size_t		sep;
	double		value;

	sep = line.find(" | ");
	line = line.substr(sep + 3, line.size());
	value = std::strtod(line.c_str(), NULL);
	if (value < 0)
		throw NotAPositiveNumberException();
	if(value > 1000)
		throw TooLargeNumberException();
	return (value);
}

void	BitcoinExchange::searchDates(std::string file_name) const
{
	std::ifstream	file;
	std::string		line;

	file.open(file_name.data(), std::ifstream::in);
	if(file.is_open())
	{
		getline(file, line);
		while(getline(file, line))
		{
			try
			{
				std::string	key = getKey(line);
				double		value = getValue(line);
				
				std::cout << key << " => " << value << " = " << value * getBottomDate(key) << std::endl;
			}
			catch (NotAPositiveNumberException& e)
			{
				std::cout << e.what();
			}
			catch (TooLargeNumberException& e)
			{
				std::cout << e.what();
			}
			catch (BadInputException& e)
			{
				std::cout << e.what() << " => " << line << std::endl;
			}
		}
	}
	else
		throw CouldNotOpenFileException();
	file.close();
}

//	exceptions

const char* BitcoinExchange::CouldNotOpenFileException::what() const throw()
{
	return "Error: could not open file.\n";
}

const char* BitcoinExchange::NotAPositiveNumberException::what() const throw()
{
	return "Error: not a positive number.\n";
}

const char* BitcoinExchange::TooLargeNumberException::what() const throw()
{
	return "Error: too large number.\n";
}

const char* BitcoinExchange::BadInputException::what() const throw()
{
	return "Error: bad input";
}