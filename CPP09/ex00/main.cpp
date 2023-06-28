/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:49:43 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/28 18:49:58 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./btc <file_to_avaluate>" << std::endl;
		return (1);
	}

	try
	{
		const BitcoinExchange btc;
		btc.searchDates(argv[1]);
	}
	catch (BitcoinExchange::CouldNotOpenFileException& e)
	{
		std::cout << e.what();
	}
	return (0);
}