/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:50:21 by rabustam          #+#    #+#             */
/*   Updated: 2023/03/31 12:35:01 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>
# include "Contact.hpp"

class PhoneBook {
	private:
	Contact	contacts[8];
	int		counter;
	void	formatPrint(std::string print);

	public:
	PhoneBook();
	void displayPhoneBook();
	void addContact(Contact c);
	void displayContactInfo(int	index);
};

#endif