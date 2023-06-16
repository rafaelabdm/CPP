/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:10:31 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/09 18:03:28 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

class ValueNotFoundException : std::exception
{
	public:
	const char*	what(void)
	{
		return "Value not found at container!\n";
	}
};

template<typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator it = find(container.begin(), container.end(), value);
	if (it == container.end())
		throw ValueNotFoundException();
	return (it);
}



#endif