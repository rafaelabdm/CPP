/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 10:18:27 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/12 10:46:20 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define RESET_COLOR "\033[0m"

class WrongAnimal
{
	protected:
	std::string type;
	
	public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& a);
	~WrongAnimal(void);
	WrongAnimal& operator=(const WrongAnimal& a);

	//member functions
	void		makeSound(void) const;
	std::string	getType(void) const;
};

#endif