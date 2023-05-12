/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 10:21:45 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/12 10:23:31 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
	WrongCat();
	WrongCat(const WrongCat& a);
	~WrongCat();
	WrongCat& operator=(const WrongCat& a);

	void	makeSound(void) const;
};

#endif