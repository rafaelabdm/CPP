/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 10:09:24 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/12 18:23:00 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidential Pardon Form", 35, 5)
{
	this->setTarget("Arthur Dent");
}

PresidentialPardonForm::PresidentialPardonForm(std::string t): AForm("Presidential Pardon Form", 35, 5)
{
	this->setTarget(t);
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& a) :	AForm(a)
{
	
}

PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm& a)
{
	setName(a.getName());
	setIsSigned(a.getIsSigned());
	setRequiredGradeToSign(a.getRequiredGradeToSign());
	setRequiredGradeToExecute(a.getRequiredGradeToExecute());
	setTarget(a.getTarget());
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (this->checkRequirements(executor) == 1)
		throw AForm::GradeTooLowException();
	if (this->checkRequirements(executor) == 2)
		throw AForm::FormNotSignedException();
	std::cout << this->getTarget() <<" has been pardoned by Zaphod Beeblebrox.\n";
}