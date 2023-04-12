/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:46:02 by rabustam          #+#    #+#             */
/*   Updated: 2023/03/31 12:22:31 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phone;
	std::string darkestSecret;
	
	public:
	Contact();
	Contact(std::string fn, std::string ln, std::string nn, std::string p, std::string ds);
	// virtual ~Contact();
	void setContact(std::string fn, std::string ln, std::string nn, std::string ds);
	void setPhone(std::string p);
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getPhone();
	std::string getDarkestSecret();
};

#endif