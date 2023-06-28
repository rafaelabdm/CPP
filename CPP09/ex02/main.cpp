/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 20:09:52 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/28 19:55:27 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char** argv)
{
	try
	{
		PmergeMe pm(argc, argv);
	}
	catch (PmergeMe::InvalidInputException& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
