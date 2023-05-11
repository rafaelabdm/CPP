/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:45:06 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/11 15:50:37 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string n) :  ClapTrap(n), FragTrap(n), ScavTrap(n)
{
	this->name = n;
	ClapTrap::name = n.append("_clap_name");
	this->attackDamage = 30;
	std::cout << "DiamondTrap constructor called!\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& a) : ClapTrap(a.ClapTrap::name), FragTrap(a.name), ScavTrap(a.name)
{
	*this = a;
	std::cout << "DiamondTrap copy constructor called!\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called!\n";
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap& a)
{
	this->name = a.name;
	this->hitPoints = a.hitPoints;
	this->energyPoints = a.energyPoints;
	this->attackDamage = a.attackDamage;
	std::cout << YELLOW << "DiamondTrap (" << this->name <<  ") copy assingment constructor called.\n" << RESET_COLOR;
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My DiamondTrap name: " << this->name << "\nClapTrap name: " << ClapTrap::name << "\n";
}

//function to see if the attributes inherieted are right
void	DiamondTrap::displayAttributes(void)
{
	std::cout << "name: " << this->name << "\n" \
			<< "hit points: " << this->hitPoints << "\n" \
			<< "energy points: " << this->energyPoints << "\n" \
			<< "attack damage: " << this->attackDamage << "\n";
}