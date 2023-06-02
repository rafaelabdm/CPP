/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:35:08 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/02 16:14:46 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define RESET_COLOR "\033[0m"

class Brain
{
	private:
	std::string ideas[100];

	public:
	Brain();
	~Brain();
	Brain(const Brain& a);
	Brain& operator= (const Brain& a);

	std::string	getIdea(int i) const;
	void		setIdea(std::string idea);
};

#endif