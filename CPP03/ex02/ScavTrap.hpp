/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:40:01 by rabustam          #+#    #+#             */
/*   Updated: 2023/04/27 14:03:53 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap(std::string n);
	ScavTrap(const ScavTrap& a);
	ScavTrap& operator = (const ScavTrap& a);
	~ScavTrap();
	void attack(const std::string& target);
	void guardGate();
};

#endif