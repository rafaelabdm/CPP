/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:38:31 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/17 10:36:35 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
	Brain* brain;
	
	public:
	Cat();
	Cat(const Cat& a);
	~Cat();
	Cat& operator=(const Cat& a);

	void	makeSound(void) const;
};

#endif