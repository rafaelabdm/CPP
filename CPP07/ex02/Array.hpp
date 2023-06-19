/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 13:28:41 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/19 13:04:29 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
	private:
	T* _array;
	unsigned int _size;

	public:

	// Constructors
	Array(void)
	{
		this->_array = new T[0];
		this->_size = 0;
	};
	
	Array(unsigned int n)
	{
		this->_array = new T[n];
		this->_size = n;
	};
	
	~Array(void)
	{
		delete[] this->_array;
	};
	
	Array(const Array& a)
	{
		this->_size = a.size();
		this->_array = new T[a.size()];
		for (unsigned int i = 0; i < _size; i++)
		{
			this->_array[i] = a[i];
		}
	};
	
	Array& operator=(const Array& a)
	{
		delete[] this->_array;
		this->_size = a.size();
		this->_array = new T[a.size()];
		for (unsigned int i = 0; i < _size; i++)
		{
			this->_array[i] = a[i];
		}
		return (*this);
	};
	
	T&	operator[](unsigned int index) const
	{
		if (index >= this->_size)
			throw OutOfBoundsException();
		return (this->_array[index]);
	};

	// Member functions
	unsigned int	size(void) const
	{
		return (this->_size);
	}
	
	// Exceptions
	class OutOfBoundsException : public std::exception
	{
		public:
		const char* what() const throw()
		{
			return "Exception: The index you tried to access is out of array bounds!\n";
		}
	};
};

#endif