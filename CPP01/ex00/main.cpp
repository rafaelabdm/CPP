/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:09:34 by rabustam          #+#    #+#             */
/*   Updated: 2023/03/31 15:15:04 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie z1("Glenn");
	Zombie *z2 = newZombie("Rick");

	z1.announce();
	z2->announce();
	randomChump("Michonne");

	delete z2;
	return (0);
}
