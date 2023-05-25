/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:35:00 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/25 10:11:53 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy Request Form", 72, 45)
{
	this->target = "Marvin";
}

RobotomyRequestForm::RobotomyRequestForm(std::string t): AForm("Robotomy Request Form", 72, 45)
{
	this->target = t;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& a) :	AForm(a)
{
	
}

RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm& a)
{
	const_cast<std::string&>(this->name) = a.name;
	this->is_signed = a.is_signed;
	const_cast<unsigned int&>(this->required_grade_to_sign) = a.required_grade_to_sign;
	const_cast<unsigned int&>(this->required_grade_to_execute) = a.required_grade_to_execute;
	this->target = a.target;
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