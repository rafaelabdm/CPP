/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:07:01 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/12 17:34:38 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string n, int rgs, int rge) : name(n), is_signed(false), required_grade_to_sign(rgs), required_grade_to_execute(rge)
{
	if (rgs < 1 || rge < 1)
		throw Form::GradeTooHighException();
	if (rgs > 150 || rge > 150)
		throw Form::GradeTooLowException();
}

Form::Form() : name("Example Form"), is_signed(false), required_grade_to_sign(150), required_grade_to_execute(150)
{
	// std::cout << "Default constructor called.\n";
}

Form::~Form()
{

}

Form::Form(const Form& a) :	name(a.name),
							is_signed(a.is_signed),
							required_grade_to_sign(a.required_grade_to_sign),
							required_grade_to_execute(a.required_grade_to_execute)
{
}

Form& Form::operator= (const Form& a)
{
	const_cast<std::string&>(this->name) = a.name;
	this->is_signed = a.is_signed;
	const_cast<unsigned int&>(this->required_grade_to_sign) = a.required_grade_to_sign;
	const_cast<unsigned int&>(this->required_grade_to_execute) = a.required_grade_to_execute;
	return (*this);
}

std::string Form::getName(void) const
{
	return (this->name);
}

bool Form::getIsSigned(void) const
{
	return (this->is_signed);
}

unsigned int Form::getRequiredGradeToSign(void) const
{
	return (this->required_grade_to_sign);
}

unsigned int Form::getRequiredGradeToExecute(void) const
{
	return (this->required_grade_to_execute);
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getRequiredGradeToSign())
		this->is_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream& operator <<(std::ostream &out, const Form& form)
{
	std::cout << "Form name: " << form.getName() << "\n" \
			  << "Signed: " << std::boolalpha << form.getIsSigned() << "\n" \
			  << "Grade required to sign: " << form.getRequiredGradeToSign() << "\n" \
			  << "Grade required to execute: " << form.getRequiredGradeToExecute() << "\n";
	return (out);
}

const char* Form::GradeTooHighException::what()
{
	return "Exception: Form: Grade is too high!\n";
}

const char* Form::GradeTooLowException::what()
{
	return "Exception: Form: Grade is too low!\n";
}