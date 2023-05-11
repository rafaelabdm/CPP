/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:49:37 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/11 14:52:25 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
	FragTrap(std::string n);
	FragTrap(const FragTrap& a);
	FragTrap& operator = (const FragTrap& a);
	~FragTrap();
	void highFivesGuys();
};

#endif