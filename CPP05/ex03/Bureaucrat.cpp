/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:12:03 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/12 18:24:12 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("some nameless bureaucrat"), grade(100)
{
	// std::cout << "Default Constructor Called!\n";
}

Bureaucrat::Bureaucrat(const std::string n, unsigned int g) : name(n)
{
	if (g < 1)
		throw Bureaucrat::GradeTooHighException();
	if (g > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = g;
}

Bureaucrat::Bureaucrat(const Bureaucrat& a)
{
	*this = a;
}

Bureaucrat::~Bureaucrat()
{
	// std::cout << "Destructor Called!\n";
}

Bureaucrat& Bureaucrat::operator= (const Bureaucrat& a)
{
	const_cast<std::string&>(this->name) = a.name;
	this->grade = a.grade;
	return (*this);
}

std::string		Bureaucrat::getName(void) const
{
	return (this->name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (this->grade);	
}

void			Bureaucrat::incrementGrade(void)
{
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void			Bureaucrat::decrementGrade(void)
{
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

void			Bureaucrat::signForm(AForm& form_to_sign) const
{
	try
	{
		form_to_sign.beSigned(*this);
		std::cout << "Bureaucrat " << this->name << " signed the \"" << form_to_sign.getName() << "\"." << std::endl;
	}
	catch (AForm::GradeTooLowException& e)
	{
		std::cout << "Bureaucrat " << this->name << " couldn't sign the \"" << form_to_sign.getName() << "\" because their grade is too low." << std::endl;
	}	
}

void		Bureaucrat::executeForm(AForm const & form) const
{
	try
	{
		form.execute(*this);
		std::cout << "Bureaucrat " << this->name << " executed the " << form.getName() << ".\n";
	}
	catch (AForm::GradeTooLowException& e)
	{
		std::cout << "Bureaucrat " << this->name << " couldn't execute the " << form.getName() << " because their grade are too low.\n";
	}
	catch (AForm::FormNotSignedException& e)
	{
		std::cout << "Bureaucrat " << this->name << " couldn't execute the " << form.getName() << " because the form is not signed.\n";
	}
}

const char* Bureaucrat::GradeTooHighException::what()
{
	return "Exception: Bureaucrat's grade is too high!\n";
}

const char* Bureaucrat::GradeTooLowException::what()
{
	return "Exception: Bureaucrat's grade is too low!\n";
}

std::ostream& operator <<(std::ostream &out, const Bureaucrat& bureaucrat)
{
	std::cout << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (out);
}