/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:45:08 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/11 14:25:33 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

// The DIAMOND problem occurs when two superclasses of a class have a COMMON
// BASE CLASS. For example, in the following diagram, the DiamondTrap class 
// gets two copies of all attributes of ClapTrap class, this causes AMBIGUITIES

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
	std::string	name;
	
	public:
	DiamondTrap(std::string n);
	DiamondTrap(const DiamondTrap& a);
	~DiamondTrap();
	DiamondTrap& operator = (const DiamondTrap& a);
	
	void	displayAttributes(void);
	void	whoAmI();
};

#endif