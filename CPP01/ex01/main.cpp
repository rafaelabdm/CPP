/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:16:07 by rabustam          #+#    #+#             */
/*   Updated: 2023/03/31 15:48:44 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string	z_name;
	int			size_of_horde;

	size_of_horde = 5;
	z_name = "Zombie";
	
	Zombie* horde = zombieHorde(size_of_horde, z_name);
	
	for (int i = 0; i < size_of_horde; i++) {
		horde[i].announce();
	}
	
	delete[] horde;
	return (0);
}