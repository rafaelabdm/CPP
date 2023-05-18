/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:31:20 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/18 12:15:17 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define MAGENTA "\033[0;34m"
# define RESET_COLOR "\033[0m"

class ClapTrap
{
	private:
	std::string name;
	int			hitPoints;
	int			energyPoints;
	int			attackDamage;
	
	public:
	ClapTrap(std::string n);
	ClapTrap(const ClapTrap& a);
	~ClapTrap();
	ClapTrap& operator = (const ClapTrap& a);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);	

	// extra functions for ex00
	std::string getName(void) const;
	int			getHitPoints(void) const;
	int			getEnergyPoints(void) const;
	int			getAttackDamage(void) const;
};

#endif