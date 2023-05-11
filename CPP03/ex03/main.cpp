/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:56:42 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/11 16:06:31 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout << "---------Instantiating DiamondTrap---------\n";
	DiamondTrap rafa("Rafa");
	
	std::cout << "\n---------Functions Tests---------\n";
	rafa.displayAttributes();
	rafa.attack("Denis");
	rafa.highFivesGuys();
	rafa.whoAmI();
	
	std::cout << "\n---------DiamondTrap Copy---------\n";
	DiamondTrap rafaCopy(rafa);
	
	std::cout << "\n---------Copy's Functions Tests---------\n";
	rafaCopy.displayAttributes();
	rafaCopy.attack("Denis");
	rafaCopy.highFivesGuys();
	rafaCopy.whoAmI();

	
	std::cout << "\n---------Destructors---------\n";

	return (0);	
}
