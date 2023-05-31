/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:35:00 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/31 11:02:46 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy Request Form", 72, 45)
{
	this->setTarget("Marvin");
}

RobotomyRequestForm::RobotomyRequestForm(std::string t): AForm("Robotomy Request Form", 72, 45)
{
	this->setTarget(t);
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& a) :	AForm(a)
{
	
}

RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm& a)
{
	setName(a.getName());
	setIsSigned(a.getIsSigned());
	setRequiredGradeToSign(a.getRequiredGradeToSign());
	setRequiredGradeToExecute(a.getRequiredGradeToExecute());
	setTarget(a.getTarget());
	return (*this);
}

void	RobotomyRequestForm::beExecuted(const Bureaucrat& bureaucrat) const
{
	if (this->checkRequirements(bureaucrat) == 1)
		throw AForm::GradeTooLowException();
	if (this->checkRequirements(bureaucrat) == 2)
		throw AForm::FormNotSignedException();
	
	srand((unsigned) time(NULL)); //change number every execution
	int robotomy = rand() % 2;
	std::cout << "RRRRRRRRRRVVVVVVVVVRRRRRRRRRRRRRRVVVVVVVVVVVRRRRRRRRRRRRRRRRR\n";
	if (robotomy)
		std::cout << this->getTarget() << " has been robotomized successfully!\n";
	else
		std::cout << "Robotomy of " << this->getTarget() << " failed.\n";
}