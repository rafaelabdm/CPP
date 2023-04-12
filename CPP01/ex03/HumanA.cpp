/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:16:12 by rabustam          #+#    #+#             */
/*   Updated: 2023/04/02 16:20:39 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//This sintax is called Initializer List. There are situations where initialization
//of data members inside constructor doesn’t work and Initializer List must be used.
//Following are such cases: 
//	1. initialization of non-static const data members
//	2. initialization of reference members
//	3. initialization of member objects which do not have default constructor
//	4. initialization of base class members
//	5. constructor’s parameter name is same as data member
//	6. for performance reasons

HumanA::HumanA( std::string n, Weapon& w ) : name(n), weapon(w) {
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their "<< this->weapon.getType() << std::endl;
}