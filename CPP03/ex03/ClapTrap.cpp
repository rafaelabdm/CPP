/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:31:23 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/17 12:11:30 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string n): name(n)
{
	std::cout << YELLOW << "ClapTrap (" << this->name <<  ") default constructor called.\n" << RESET_COLOR;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& a)
{
	std::cout << YELLOW << "ClapTrap (" << this->name <<  ") copy constructor called.\n" << RESET_COLOR;
	*this = a;
}

ClapTrap::~ClapTrap()
{
	std::cout << YELLOW << "ClapTrap (" << this->name <<  ") destructor called.\n" << RESET_COLOR;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& a)
{
	std::cout << YELLOW << "ClapTrap (" << this->name <<  ") copy assingment constructor called.\n" << RESET_COLOR;
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
		std::cout << GREEN << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!\n" << RESET_COLOR;
		this->energyPoints--;
		return ;
	}
	std::cout << MAGENTA << "ClapTrap " << this->name << " don't have any energy/hit points left to attack.\n" << RESET_COLOR;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << RED << "ClapTrap " << this->name << " took " << amount << " of damage.\n" << RESET_COLOR;
	this->hitPoints -= amount;
	if (this->hitPoints < 0)
		this->hitPoints = 0;
	std::cout << RED << "Hit Points left: " << this->hitPoints << "\n" << RESET_COLOR;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints && this->hitPoints)
	{
		std::cout << GREEN << "ClapTrap " << this->name << " gets " << amount << " of it's hit points back!\n" << RESET_COLOR;
		this->energyPoints--;
		this->hitPoints += amount;
		std::cout << GREEN << "Hit Points left: " << this->hitPoints << "\n" << RESET_COLOR;
		return ;
	}
	std::cout << MAGENTA << "ClapTrap " << this->name << " don't have any energy/hit points left to be repaired.\n" << RESET_COLOR;
}

int	ClapTrap::getHitPoints(void)
{
	return (this->hitPoints);
}

int	ClapTrap::getEnergyPoints(void)
{
	return (this->energyPoints);
}
	
int	ClapTrap::getAttackDamage(void)
{
	return (this->attackDamage);
}