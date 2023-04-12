/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:50:32 by rabustam          #+#    #+#             */
/*   Updated: 2023/03/31 16:02:36 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	//printing the memory addresses
	std::cout << &str <<std::endl;
	std::cout << stringPTR <<std::endl;
	std::cout << &stringREF <<std::endl;
	
	//printing the values
	std::cout << str <<std::endl;
	std::cout << *stringPTR <<std::endl;
	std::cout << stringREF <<std::endl;
	
	return (0);
}
