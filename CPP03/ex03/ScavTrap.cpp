/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:39:39 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/22 13:30:47 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->name = "Scavy";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << YELLOW << "ScavTrap (" << this->name <<  ") default constructor called.\n" << RESET_COLOR;
}

ScavTrap::ScavTrap (std::string n) : ClapTrap(n)
{
	std::cout << YELLOW << "ScavTrap (" << this->name <<  ") constructor called.\n" << RESET_COLOR;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& a) : ClapTrap(a.name)
{
	std::cout << YELLOW << "ScavTrap (" << this->name <<  ") copy constructor called.\n" << RESET_COLOR;
	*this = a;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& a)
{
	std::cout << YELLOW << "ScavTrap (" << this->name <<  ") copy assingment constructor called.\n" << RESET_COLOR;
	this->name = a.name;
	this->hitPoints = a.hitPoints;
	this->energyPoints = a.energyPoints;
	this->attackDamage = a.attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap ()
{
	std::cout << YELLOW << "ScavTrap (" << this->name <<  ") destructor called.\n" << RESET_COLOR;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energyPoints && this->hitPoints)
	{
		std::cout << GREEN << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << RESET_COLOR;
		this->energyPoints--;
		std::cout << " (Energy Points left: " << this->energyPoints << ")\n";
		return ;
	}
	std::cout << MAGENTA << "ScavTrap " << this->name << " don't have any energy/hit points left to attack.\n" << RESET_COLOR;
}
void	ScavTrap::guardGate()
{
	std::cout << GREEN << "ScavTrap " << this->name <<  " is now in Gatekeeper mode.\n" << RESET_COLOR;;
}
