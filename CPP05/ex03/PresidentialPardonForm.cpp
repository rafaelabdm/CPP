/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 10:09:24 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/28 11:32:25 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Presidential Pardon Form", 35, 5)
{
	this->target = "Arthur Dent";
}

PresidentialPardonForm::PresidentialPardonForm(std::string t): Form("Presidential Pardon Form", 35, 5)
{
	this->target = t;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << YELLOW << this->getName() << " destructor called.\n" << RESET_COLOR;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& a) :	Form(a)
{
	
}

PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm& a)
{
	const_cast<std::string&>(this->name) = a.name;
	this->is_signed = a.is_signed;
	const_cast<unsigned int&>(this->required_grade_to_sign) = a.required_grade_to_sign;
	const_cast<unsigned int&>(this->required_grade_to_execute) = a.required_grade_to_execute;
	this->target = a.target;
	return (*this);
}

void	PresidentialPardonForm::beExecuted(const Bureaucrat& bureaucrat) const
{
	if (this->checkRequirements(bureaucrat) == 1)
		throw Form::GradeTooLowException();
	if (this->checkRequirements(bureaucrat) == 2)
		throw Form::FormNotSignedException();
	std::cout << this->getTarget() <<" has been pardoned by Zaphod Beeblebrox.\n";
}