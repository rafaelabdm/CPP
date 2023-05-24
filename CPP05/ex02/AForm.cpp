/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:07:01 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/24 20:06:37 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string n, int rgs, int rge) : name(n), is_signed(false), required_grade_to_sign(rgs), required_grade_to_execute(rge)
{
	if (rgs < 1 || rge < 1)
		throw AForm::GradeTooHighException();
	if (rgs > 150 || rge > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm() : name("Example AForm"), is_signed(false), required_grade_to_sign(150), required_grade_to_execute(150)
{
	// std::cout << "Default constructor called.\n";
}

AForm::~AForm()
{

}

AForm::AForm(const AForm& a) :	name(a.name),
							is_signed(a.is_signed),
							required_grade_to_sign(a.required_grade_to_sign),
							required_grade_to_execute(a.required_grade_to_execute)
{
}

AForm& AForm::operator= (const AForm& a)
{
	const_cast<std::string&>(this->name) = a.name;
	this->is_signed = a.is_signed;
	const_cast<unsigned int&>(this->required_grade_to_sign) = a.required_grade_to_sign;
	const_cast<unsigned int&>(this->required_grade_to_execute) = a.required_grade_to_execute;
	this->target = a.target;
	return (*this);
}

std::string AForm::getName(void) const
{
	return (this->name);
}

bool AForm::getIsSigned(void) const
{
	return (this->is_signed);
}

unsigned int AForm::getRequiredGradeToSign(void) const
{
	return (this->required_grade_to_sign);
}

unsigned int AForm::getRequiredGradeToExecute(void) const
{
	return (this->required_grade_to_execute);
}

std::string AForm::getTarget(void) const
{
	return (this->target);
}

void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getRequiredGradeToSign())
		this->is_signed = true;
	else
		throw AForm::GradeTooLowException();
}

int	AForm::checkRequirements(const Bureaucrat& bureaucrat) const
{
	if ((bureaucrat.getGrade() > this->getRequiredGradeToExecute()))
		return (1);
	if (!this->getIsSigned())
		return(2);
	return (0);
}

std::ostream& operator <<(std::ostream &out, const AForm& form)
{
	std::cout << "Form name: " << form.getName() << "\n" \
			  << "Signed: " << std::boolalpha << form.getIsSigned() << "\n" \
			  << "Grade required to sign: " << form.getRequiredGradeToSign() << "\n" \
			  << "Grade required to execute: " << form.getRequiredGradeToExecute() << "\n" \
			  << "Target: " << form.getTarget() << "\n";
	return (out);
}