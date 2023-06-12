/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:17:25 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/07 13:08:13 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	{
		std::cout << "\n----------INT TEST----------\n";
		int arr[] = {1, 2, 3};
	
		iter<int>(arr, sizeof(arr)/sizeof(int), print);
	}

	{
		std::cout << "\n----------CHAR TEST----------\n";
		char arr[] = {'a', 'b', 'c'};
		
		iter<char>(arr, sizeof(arr)/sizeof(char), print);
	}

	{	
		std::cout << "\n----------STRING TEST----------\n";
		std::string arr[] = {"Leandro", "Gabriela", "Rafaela"};
		
		iter<std::string>(arr, sizeof(arr)/sizeof(std::string), print);
	}

	{
		std::cout << "\n----------FLOAT TEST----------\n";
		float arr[] = {1.23, 2.45, 3.333333};
	
		iter<float>(arr, sizeof(arr)/sizeof(float), print);
	}

	{
		std::cout << "\n----------BOOL TEST----------\n";
		bool arr[] = {true, false, true};
	
		iter<bool>(arr, sizeof(arr)/sizeof(bool), print);
	}
	return (0);
}

