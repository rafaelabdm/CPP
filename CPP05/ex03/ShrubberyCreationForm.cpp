/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 19:03:59 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/28 11:32:34 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery Creation Form", 145, 137)
{
	this->target = "Home";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string t): Form("Shrubbery Creation Form", 145, 137)
{
	this->target = t;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << YELLOW << this->getName() << " destructor called.\n" << RESET_COLOR;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& a) :	Form(a)
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
		throw Form::GradeTooLowException();
	if (this->checkRequirements(bureaucrat) == 2)
		throw Form::FormNotSignedException();
	
	std::string file_name = target + "_shrubbery";
	std::fstream file;
	file.open(file_name.data(), std::ios::in | std::ios::out | std::ios::trunc);
	if (!file.is_open())
		return;
	file << "       _-_\n    /~~   ~~\\\n /~~         ~~\\\n{               }\n \\  _-     -_  /\n   ~  \\\\ //  ~\n_- -   | | _- _\n  _ -  | |   -_\n      // \\\\\n\n       ###\n      #o###\n    #####o###\n   #o#\\#|#/###\n    ###\\|/#o#\n     # }|{  #\n       }|{\n\n          &&& &&  & &&\n      && &\\/&\\|& ()|/ @, &&\n      &\\/(/&/&||/& /_/)_&/_&\n   &() &\\/&|()|/&\\/ '%\" & ()\n  &_\\_&&_\\ |& |&&/&__%_/_& &&\n&&   && & &| &| /& & % ()& /&&\n ()&_---()&\\&\\|&&-&&--%---()~\n     &&     \\|||\n             |||\n             |||\n             |||\n";
	file.close();
}

