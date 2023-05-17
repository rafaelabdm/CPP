/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:39:50 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/12 18:39:19 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
	Brain* brain;

	public:
	Dog();
	Dog(const Dog& a);
	~Dog();
	Dog& operator=(const Dog& a);

	void	makeSound(void) const;
};

#endif