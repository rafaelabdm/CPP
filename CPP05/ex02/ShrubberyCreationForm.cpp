/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 19:03:59 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/24 20:25:47 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery Creation Form", 145, 137)
{
	this->target = "Home";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string t): AForm("Shrubbery Creation Form", 145, 137)
{
	this->target = t;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& a) :	AForm(a)
{
	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& a)
{
	const_cast<std::string&>(this->name) = a.name;
	this->is_signed = a.is_signed;
	const_cast<unsigned int&>(this->required_grade_to_sign) = a.required_grade_to_sign;
	const_cast<unsigned int&>(this->required_grade_to_execute) = a.required_grade_to_execute;
	this->target = a.target;
	return (*this);
}

void	ShrubberyCreationForm::beExecuted(const Bureaucrat& bureaucrat) const
{
	if (this->checkRequirements(bureaucrat) == 1)
		throw AForm::GradeTooLowException();
	if (this->checkRequirements(bureaucrat) == 2)
		throw AForm::FormNotSignedException();
	std::cout << "EXECUTEI! (criar rquivo <target>_shrubbery [...])\n";
}