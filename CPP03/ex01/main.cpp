/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:09:31 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/17 12:15:25 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "---------Instantiating ClapTrap---------\n";
	ClapTrap rafa("Rafa");

	std::cout << "\n---------Instantiating ScavTrap---------\n";
	ScavTrap denis("Denis");

	std::cout << "\n---------Rafa---------\n";
	rafa.attack("enemy");

	std::cout << "\n---------Denis---------\n";
	denis.attack("enemy");
	denis.takeDamage(10);
	denis.beRepaired(5);
	denis.guardGate();
	
	std::cout << "\n---------Destructors---------\n";

	return (0);	
}
