/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:15:53 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/15 10:48:47 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "utils.hpp"

int	main(void)
{
	std::cout << INVERT_COLOR << "TEST 01: Passing a random class (A, B or C)" << RESET_COLOR << std::endl;
	Base * test_01 = generate();
	std::cout << "Identify by pointer: ";
	identify(test_01);
	std::cout << "Identify by reference: ";
	identify(*test_01);
	std::cout << "\n";
	delete test_01;

	std::cout << INVERT_COLOR << "TEST 02: Error handling (passing the Base class)" << RESET_COLOR << std::endl;
	Base test_02;
	std::cout << "Identify by pointer: ";
	identify(&test_02);
	std::cout << "Identify by reference: ";
	identify(test_02);
	std::cout << "\n";

	return (0);
}
