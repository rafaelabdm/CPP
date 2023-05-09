/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:20:03 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/09 13:21:46 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string n ) {
	this->name = n;
    this->weapon = NULL;
}

void HumanB::attack(void)
{
	if (this->weapon == NULL)
		std::cout << this->name << " attacks with their empty hands" << std::endl;
	else
		std::cout << this->name << " attacks with their "<< weapon->getType() << std::endl;
}

//overload to handle NULL pointer
void HumanB::setWeapon(Weapon *new_weapon)
{
	this->weapon = new_weapon;
}

void HumanB::setWeapon(Weapon& new_weapon)
{
	this->weapon = &new_weapon;
}