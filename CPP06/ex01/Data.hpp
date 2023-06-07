/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:31:14 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/07 09:23:20 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include "colors.hpp"

class Data
{
	private:
	int i;

	public:
	Data();
	Data(int b);
	~Data();
	Data(const Data& a);
	Data&	operator=(const Data& a);
	bool	operator==(const Data& a) const;
	int		getInteger(void) const;
	void	setInteger(int new_i);
};

#endif