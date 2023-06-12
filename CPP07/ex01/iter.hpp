/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:17:50 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/07 13:01:12 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template<typename T>
void iter(T* arr, size_t size, void (func)(T& value))
{
	for (size_t i = 0; i < size; i++)
		func(arr[i]);
}

template<class T>
void print(T value)
{
	std::cout << "value = " << value << "\n";
}

#endif