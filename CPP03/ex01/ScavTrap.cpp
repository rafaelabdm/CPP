/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:39:39 by rabustam          #+#    #+#             */
/*   Updated: 2023/04/26 17:24:14 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap (std::string n) : ClapTrap(n)
{
	std::cout << YELLOW << "ScavTrap default constructor called.\n" << RESET_COLOR;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap ()
{
	std::cout << YELLOW << "ScavTrap destructor called.\n" << RESET_COLOR;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energyPoints && this->hitPoints)
	{
		std::cout << GREEN << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!\n" << RESET_COLOR;
		this->energyPoints--;
		return ;
	}
	std::cout << MAGENTA << "ScavTrap " << this->name << " don't have any energy/hit points left to attack.\n" << RESET_COLOR;
}
void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gatekeeper mode\n";
}
