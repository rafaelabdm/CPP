/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:07:51 by rabustam          #+#    #+#             */
/*   Updated: 2023/03/31 16:59:47 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t)
{
	this->type = t;
}

const std::string&	Weapon::getType(void)
{
	const std::string&	ref = this->type;
	return (ref);
}

void	Weapon::setType(std::string new_type)
{
	this->type = new_type;
}
