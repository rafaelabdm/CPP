/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:28:58 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/17 10:32:23 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define RESET_COLOR "\033[0m"

class Animal 
{
	protected:
	std::string type;
	
	public:
	Animal(void);
	Animal(const Animal& a);
	virtual ~Animal(void);
	Animal& operator=(const Animal& a);

	//member functions
	virtual void	makeSound(void) const = 0;
	std::string		getType(void) const;
};

#endif