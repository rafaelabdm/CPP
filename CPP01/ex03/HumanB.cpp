/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:20:03 by rabustam          #+#    #+#             */
/*   Updated: 2023/04/02 16:39:02 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string n ) {
	this->name = n;
    this->weapon = NULL;
}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with their "<< weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& new_weapon)
{
	this->weapon = &new_weapon;
}