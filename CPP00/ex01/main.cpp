/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:01:20 by rabustam          #+#    #+#             */
/*   Updated: 2023/04/19 11:50:31 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void	add(PhoneBook *book)
{
	std::string fn, ln, nn, ph, ds;
	
	do {
		std::cout << "\n\033[1;34mFill in the contact's information. Don't leave any empty fields!\033[0m\n\n";
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
		if (std::cin.eof())
			return ;
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
	if (std::cin.eof() || input.empty())
		return ;
	std::istringstream convertion(input);
	convertion >> index;
	if (index > 7 || index < 0)
		std::cout << "\033[1;33mHow will you blackmail someone if you can't even pick a number that exists?\033[0m\n\n";
	else
		book->displayContactInfo(index);
}

int	main(void)
{
	std::string input;
	PhoneBook	book;

	do {
		std::cout << "\033[1;34mWellcome to the Blackmail Phone Book Software!\033[0m\n\n";
		std::cout << "Here's what you can do:\n";
		std::cout << "- 'ADD' to add a contact to the blackmail list.\n";
		std::cout << "- 'SEARCH' to get a contact information, and blackmail them.\n";
		std::cout << "- 'EXIT' to exit and lost all your contact's secrets forever.\n";
		
		std::getline(std::cin, input);
		
		if (input == "ADD")
			add(&book);
		else if (input == "SEARCH")
		{
			book.displayPhoneBook();
			search(&book);
		}
	} while (input != "EXIT" && !std::cin.eof());
	return (0);
}
