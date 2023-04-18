/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:46:18 by rabustam          #+#    #+#             */
/*   Updated: 2023/04/18 14:52:45 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string	strToUpper(std::string str)
{
	int			i;

	i = 0;
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}

int main(int argc, char **argv)
{
	std::string	input;
	int			i;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		input = argv[i];
		input = strToUpper(input);
		std::cout << input;
		i++;
	}
	std::cout << "\n";
	return (0);
}

/*
Subject tests:
1 - ./megaphone "shhhhh... I think the students are asleep..."
2 - ./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
3 - ./megaphone
*/
