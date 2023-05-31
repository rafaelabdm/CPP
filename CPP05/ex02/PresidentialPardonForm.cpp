/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 10:09:24 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/31 11:01:52 by rabustam         ###   ########.fr       */
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

void	PresidentialPardonForm::beExecuted(const Bureaucrat& bureaucrat) const
{
	if (this->checkRequirements(bureaucrat) == 1)
		throw AForm::GradeTooLowException();
	if (this->checkRequirements(bureaucrat) == 2)
		throw AForm::FormNotSignedException();
	std::cout << this->getTarget() <<" has been pardoned by Zaphod Beeblebrox.\n";
}