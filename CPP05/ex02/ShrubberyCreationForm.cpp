/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 19:03:59 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/31 11:03:34 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery Creation Form", 145, 137)
{
	this->setTarget("Home");
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string t): AForm("Shrubbery Creation Form", 145, 137)
{
	this->setTarget(t);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& a) :	AForm(a)
{
	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& a)
{
	setName(a.getName());
	setIsSigned(a.getIsSigned());
	setRequiredGradeToSign(a.getRequiredGradeToSign());
	setRequiredGradeToExecute(a.getRequiredGradeToExecute());
	setTarget(a.getTarget());
	return (*this);
}

void	ShrubberyCreationForm::beExecuted(const Bureaucrat& bureaucrat) const
{
	if (this->checkRequirements(bureaucrat) == 1)
		throw AForm::GradeTooLowException();
	if (this->checkRequirements(bureaucrat) == 2)
		throw AForm::FormNotSignedException();
	
	std::string file_name = getTarget() + "_shrubbery";
	std::fstream file;
	file.open(file_name.data(), std::ios::in | std::ios::out | std::ios::trunc);
	if (!file.is_open())
		return;
	file << "       _-_\n    /~~   ~~\\\n /~~         ~~\\\n{               }\n \\  _-     -_  /\n   ~  \\\\ //  ~\n_- -   | | _- _\n  _ -  | |   -_\n      // \\\\\n\n       ###\n      #o###\n    #####o###\n   #o#\\#|#/###\n    ###\\|/#o#\n     # }|{  #\n       }|{\n\n          &&& &&  & &&\n      && &\\/&\\|& ()|/ @, &&\n      &\\/(/&/&||/& /_/)_&/_&\n   &() &\\/&|()|/&\\/ '%\" & ()\n  &_\\_&&_\\ |& |&&/&__%_/_& &&\n&&   && & &| &| /& & % ()& /&&\n ()&_---()&\\&\\|&&-&&--%---()~\n     &&     \\|||\n             |||\n             |||\n             |||\n";
	file.close();
}

