/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:10:31 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/21 13:46:56 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

# define RESET_COLOR	"\033[0m"
# define INVERT_COLOR	"\033[7m"
# define YELLOW			"\033[0;33m"

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