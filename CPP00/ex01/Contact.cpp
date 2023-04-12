/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:50:17 by rabustam          #+#    #+#             */
/*   Updated: 2023/03/30 15:31:30 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	this->firstName = "----------";
	this->lastName = "----------";
	this->nickName = "----------";
	this->phone = "----------";
	this->darkestSecret = "----------";
}

Contact::Contact(std::string fn,  std::string ln, std::string nn, std::string p, std::string ds) {
	this->setContact(fn, ln, nn, ds);
	this->setPhone(p);
}

void Contact::setContact(std::string fn, std::string ln, std::string nn, std::string ds) {
	this->firstName = fn;
	this->lastName = ln;
	this->nickName = nn;
	this->darkestSecret = ds;
}

void Contact::setPhone(std::string p) {
	this->phone = p;
}

std::string Contact::getFirstName() {
	return (this->firstName);
}

std::string Contact::getLastName() {
	return (this->lastName);
}

std::string Contact::getNickName() {
	return (this->nickName);
}

std::string Contact::getPhone() {
	return (this->phone);
}

std::string Contact::getDarkestSecret() {
	return (this->darkestSecret);
}
