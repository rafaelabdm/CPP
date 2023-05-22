/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:53:33 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/22 13:30:45 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->name = "Fragy";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << YELLOW << "FragTrap (" << this->name <<  ") default constructor called.\n" << RESET_COLOR;
}

FragTrap::FragTrap (std::string n) : ClapTrap(n)
{
	std::cout << YELLOW << "FragTrap (" << this->name <<  ") constructor called.\n" << RESET_COLOR;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& a) : ClapTrap(a.name)
{
	std::cout << YELLOW << "FragTrap (" << this->name <<  ") copy constructor called.\n" << RESET_COLOR;
	*this = a;
}

FragTrap& FragTrap::operator = (const FragTrap& a)
{
	std::cout << YELLOW << "FragTrap (" << this->name <<  ") copy assingment constructor called.\n" << RESET_COLOR;
	this->name = a.name;
	this->hitPoints = a.hitPoints;
	this->energyPoints = a.energyPoints;
	this->attackDamage = a.attackDamage;
	return (*this);
}

FragTrap::~FragTrap ()
{
	std::cout << YELLOW << "FragTrap (" << this->name <<  ") destructor called.\n" << RESET_COLOR;
}

void	FragTrap::highFivesGuys()
{
	std::cout << GREEN << "FragTrap " << this->name <<  " is requesting high fives!\n" << RESET_COLOR;
}
