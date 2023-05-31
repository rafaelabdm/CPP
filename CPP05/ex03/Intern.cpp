/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 10:13:20 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/31 11:18:26 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}

Intern::Intern(Intern& a)
{
	*this = a;
}

Intern& Intern::operator= (Intern& a)
{
	(void) a;
	return (*this);
}

Form* Intern::makePresidentialForm(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form* Intern::makeRobotomyForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form* Intern::makeShrubberyForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}


Form* Intern::makeForm(std::string form_name, std::string form_target)
{
	if (form_name.compare("presidential pardon") && form_name.compare("robotomy request") && form_name.compare("shrubbery creation"))
	{
		std::cout << RED << "Error: " << RESET_COLOR << "Requested form \""<< form_name << "\" does not exists.\n";
		return (NULL);
	}
	
	Form*	(Intern::*forms[4])(std::string) = {
		&Intern::makePresidentialForm,
		NULL,
		&Intern::makeRobotomyForm,
		&Intern::makeShrubberyForm
	};

	Form* requested_form = (this->*forms[form_name[0] % 4])(form_target);
	std::cout << "Intern creates " << requested_form->getName() << ".\n";
		
	return(requested_form);
}
