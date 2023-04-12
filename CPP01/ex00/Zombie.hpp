/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:37:20 by rabustam          #+#    #+#             */
/*   Updated: 2023/03/31 15:06:53 by rabustam         ###   ########.fr       */
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
	Zombie(std::string n);
	~Zombie();
	void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif