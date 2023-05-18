/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:31:23 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/18 12:15:30 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string n): name(n)
{
	std::cout << YELLOW << "Default constructor called.\n" << RESET_COLOR;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& a)
{
	std::cout << YELLOW << "Copy constructor called.\n" << RESET_COLOR;
	*this = a;
}

ClapTrap::~ClapTrap()
{
	std::cout << YELLOW << "Destructor called.\n" << RESET_COLOR;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& a)
{
	std::cout << YELLOW << "Copy assingment constructor called.\n" << RESET_COLOR;
	this->name = a.name;
	this->hitPoints = a.hitPoints;
	this->energyPoints = a.energyPoints;
	this->attackDamage = a.attackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints && this->hitPoints)
	{
		std::cout << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!";
		this->energyPoints--;
		std::cout << " (Energy Points left: " << this->energyPoints << ")\n";
		return ;
	}
	std::cout << MAGENTA << this->name << " don't have any energy/hit points left to attack.\n" << RESET_COLOR;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << " took " << amount << " of damage.";
	this->hitPoints -= amount;
	if (this->hitPoints < 0)
		this->hitPoints = 0;
	std::cout << " (Hit Points left: " << this->hitPoints << ")\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints && this->hitPoints)
	{
		std::cout << this->name << " gets " << amount << " of it's hit points back!";
		this->energyPoints--;
		this->hitPoints += amount;
		std::cout << " (Hit Points left: " << this->hitPoints;
		std::cout << " / Energy Points left: " << this->energyPoints << ")\n";
		return ;
	}
	std::cout << MAGENTA << this->name << " don't have any energy/hit points left to be repaired.\n" << RESET_COLOR;
}

std::string ClapTrap::getName(void) const
{
	return (this->name);
}

int			ClapTrap::getHitPoints(void) const
{
	return (this->hitPoints);
}

int			ClapTrap::getEnergyPoints(void) const
{
	return (this->energyPoints);
}

int			ClapTrap::getAttackDamage(void) const
{
	return (this->attackDamage);
}
