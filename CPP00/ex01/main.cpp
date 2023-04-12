/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:01:20 by rabustam          #+#    #+#             */
/*   Updated: 2023/03/31 11:59:46 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void	add(PhoneBook *book)
{
	std::string fn, ln, nn, ph, ds;
	
	do {
		std::cout << "\nFill in the contact's information. Don't leave any empty fields!\n\n";
		std::cout << "First Name: ";
		std::getline(std::cin, fn);
		std::cout << "Last Name: ";
		std::getline(std::cin, ln);
		std::cout << "Nickname: ";
		std::getline(std::cin, nn);
		std::cout << "Phone: ";
		std::getline(std::cin, ph);
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, ds);
	} while (fn.empty() || ln.empty() || nn.empty() || ph.empty() || ds.empty());
	
	Contact c(fn, ln, nn, ph, ds);
	book->addContact(c);
}

void	search(PhoneBook *book)
{
	std::string	input;
	int			index;

	std::cout << "Choose index of the contact you want info on: ";
	std::getline(std::cin, input);
	std::istringstream convertion(input);
	convertion >> index;
	if (index > 7 || index < 0)
		std::cout << "\nHow will you blackmail someone if you can't even pick a number that exists?\n\n";
	else
		book->displayContactInfo(index);
}

int	main(void)
{
	std::string input;
	PhoneBook	book;

	do {
		std::cout << "Wellcome to the Blackmail Phone Book Software!\n" << std::endl;
		std::cout << "Here's what you can do:" << std::endl;
		std::cout << "- 'ADD' to add a contact to the blackmail list." << std::endl;
		std::cout << "- 'SEARCH' to get a contact information, and blackmail them." << std::endl;
		std::cout << "- 'EXIT' to exit and lost all your contact's secrets forever." << std::endl;
		
		std::getline(std::cin, input);
		
		if (input == "ADD")
			add(&book);
		else if (input == "SEARCH")
		{
			book.displayPhoneBook();
			search(&book);
		}
	} while (input != "EXIT");
	return (0);
}
