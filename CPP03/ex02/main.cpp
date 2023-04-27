/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:09:31 by rabustam          #+#    #+#             */
/*   Updated: 2023/04/27 14:23:13 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	std::cout << "---------Instantiating ClapTrap---------\n";
	ClapTrap rafa("Rafa");
	
	std::cout << "\n---------Instantiating FragTrap---------\n";
	FragTrap denis("Denis");

	std::cout << "\n---------FragTrap Copy---------\n";
	FragTrap x(denis);

	std::cout << "\n---------FragTrap Copy Assingment---------\n";
	FragTrap y = denis;
	
	std::cout << "\n---------Functions Tests---------\n";
	rafa.attack("Denis");
	denis.highFivesGuys();
	x.highFivesGuys();
	y.highFivesGuys();
	
	std::cout << "\n---------Destructors---------\n";


	return (0);	
}
