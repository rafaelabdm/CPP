/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:31:20 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/22 13:02:52 by rabustam         ###   ########.fr       */
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
	protected:
	std::string name;
	int			hitPoints;
	int			energyPoints;
	int			attackDamage;
	
	public:
	ClapTrap();
	ClapTrap(std::string n);
	ClapTrap(const ClapTrap& a);
	~ClapTrap();
	ClapTrap& operator = (const ClapTrap& a);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif