/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:12:59 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/09 13:11:41 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	private:
	std::string	name;
	Weapon*		weapon;
	
	public:
	HumanB(std::string n);
	void	attack(void);
	void	setWeapon(Weapon* new_weapon);
	void	setWeapon(Weapon& new_weapon);
};

#endif