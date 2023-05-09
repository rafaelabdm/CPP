/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:43:35 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/09 20:18:23 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	
}

Harl::~Harl()
{
	
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-\
pickle-specialketchup burger. I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't \
put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";	
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been \
coming for years whereas you started working here since last month.\n";	
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";	
}

void	Harl::complain( std::string level )
{
	void	(Harl::*func[4])(void) = { &Harl::info, &Harl::warning, &Harl::error, &Harl::debug};

	if (level != ("DEBUG") && level != ("INFO") && level != ("WARNING") && level != ("ERROR"))
		return ;
	(this->*func[level[4] % 4])();
}
