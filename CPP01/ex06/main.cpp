/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:22:06 by rabustam          #+#    #+#             */
/*   Updated: 2023/04/18 15:43:02 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i = 0;
	Harl		harl;
	
	if (argc != 2)
	{
		std::cout << "\033[1;33mUsage: ./harl <level>\033[0m\n";
		return (0);
	}
	
	while (i < 4)
	{
		if (argv[1] == levels[i])
			break ;
		i++;
	}
	
	if (i == 4)
	{
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		return (0);
	}
	
	while (i < 4)
	{
		switch(i)
		{
			case 0:
			{
				std::cout << "[DEBUG]\n";
				harl.complain("DEBUG");
				break ;
			}
			case 1:
			{
				std::cout << "[INFO]\n";
				harl.complain("INFO");
				break ;
			}
			case 2:
			{
				std::cout << "[WARNING]\n";
				harl.complain("WARNING");
				break ;
			}
			default:
			{
				std::cout << "[ERROR]\n";
				harl.complain("ERROR");
			}
		}
		std::cout << "\n";
		i++;
	}
	
}
