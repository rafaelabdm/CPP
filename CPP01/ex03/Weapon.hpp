/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:04:21 by rabustam          #+#    #+#             */
/*   Updated: 2023/03/31 16:33:17 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	private:
	std::string type;
	
	public:
	Weapon();
	Weapon(std::string t);
	const std::string&	getType(void);
	void				setType(std::string new_type);
};

#endif