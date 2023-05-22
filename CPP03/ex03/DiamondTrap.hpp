/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:45:08 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/22 13:29:56 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
	std::string	name;
	
	public:
	DiamondTrap();
	DiamondTrap(std::string n);
	DiamondTrap(const DiamondTrap& a);
	~DiamondTrap();
	DiamondTrap& operator = (const DiamondTrap& a);
	
	void	displayAttributes(void);
	void	whoAmI();
};

#endif