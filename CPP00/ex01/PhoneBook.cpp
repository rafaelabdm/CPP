/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:50:11 by rabustam          #+#    #+#             */
/*   Updated: 2023/03/31 12:31:44 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->counter = 0;
}

void PhoneBook::formatPrint(std::string print) {
	if (print.length() > 10)
		std::cout << print.substr(0, 9) << '.';
	else
		std::cout << std::setw(10) << print;
}

void PhoneBook::displayPhoneBook() {
	std::cout << "         nº|First Name |Last Name |Nickname\n";
	for (int i = 0; i < 8; i++) {
		std::cout << "-----------------------------------------------------\n";
		std::cout << std::setw(10) << i << " | ";
		formatPrint(this->contacts[i].getFirstName());
		std::cout << "|";
		formatPrint(this->contacts[i].getLastName());
		std::cout << "|";
		formatPrint(this->contacts[i].getNickName());
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void PhoneBook::displayContactInfo(int index) {
	std::cout << "\nFirst Name: " << this->contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << this->contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << this->contacts[index].getNickName() << std::endl;
	std::cout << "Phone: " << this->contacts[index].getPhone() << std::endl;
	std::cout << "Darkest Secret: " << this->contacts[index].getDarkestSecret() << std::endl << std::endl;
}

void PhoneBook::addContact(Contact c) {
	if (this->counter == 8)
		this->counter = 0;
	this->contacts[counter] = c;
	this->counter++;
}
