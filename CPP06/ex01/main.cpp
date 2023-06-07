/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 20:20:07 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/07 09:25:25 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"
#include "colors.hpp"

int	main(void)
{
	Data ptr(10);

	uintptr_t serialized;
	serialized = Serializer::serialize(&ptr);
	
	Data* deserialized = Serializer::deserialize(serialized);
	
	if (*deserialized == ptr)
		std::cout << GREEN << "Success!\n" << RESET_COLOR;
	else
		std::cout << RED << "You're a moron!\n" << RESET_COLOR;
	return (0);
}