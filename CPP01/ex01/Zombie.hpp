/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:37:20 by rabustam          #+#    #+#             */
/*   Updated: 2023/03/31 15:30:00 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
	std::string name;
	public:
	Zombie(void);
	Zombie(std::string n);
	~Zombie(void);
	void announce(void);
	void setName(std::string n);
};

Zombie*	zombieHorde( int N, std::string name );
Zombie*	newZombie( std::string name );
void 	randomChump( std::string name );

#endif