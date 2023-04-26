/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:09:31 by rabustam          #+#    #+#             */
/*   Updated: 2023/04/26 15:33:13 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap rafa("Rafa");
	ClapTrap denis(rafa);
	ClapTrap vic("Vic");

	std::cout << "---------Rafa(1)---------\n";
	rafa.attack("enemy");
	rafa.takeDamage(8);
	rafa.beRepaired(1);
	rafa.takeDamage(4);
	rafa.beRepaired(10);

	std::cout << "---------Rafa(2)---------\n";
	denis.attack("enemy");
	denis.takeDamage(8);
	denis.beRepaired(1);
	denis.takeDamage(2);
	denis.beRepaired(10);

	std::cout << "---------Rafa(3)---------\n";
	vic = rafa;
	vic.attack("enemy");
	vic.takeDamage(8);
	vic.beRepaired(1);
	vic.takeDamage(2);
	vic.beRepaired(10);
	
	return (0);	
}
