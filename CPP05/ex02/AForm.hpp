/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:47:55 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/31 10:52:55 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
	const std::string	name;
	bool				is_signed;
	const unsigned int	required_grade_to_sign;
	const unsigned int	required_grade_to_execute;
	std::string			target;
	
	public:
	AForm();
	AForm(std::string n, int rgs, int rge);
	virtual ~AForm();
	AForm(const AForm& a);
	AForm& operator= (const AForm& a);
	
	//getters
	virtual std::string		getName(void) const;
	virtual bool			getIsSigned(void) const;
	virtual unsigned int	getRequiredGradeToSign(void) const;
	virtual unsigned int	getRequiredGradeToExecute(void) const;
	virtual std::string		getTarget(void) const;

	//setters
	virtual void	setName(std::string newName);
	virtual void	setIsSigned(bool signature);
	virtual void	setRequiredGradeToSign(unsigned int newGradeToSign);
	virtual void	setRequiredGradeToExecute(unsigned int newGradeToExecute);
	virtual void	setTarget(std::string newTarget);

	//other member functions
	virtual void	beSigned(const Bureaucrat& bureaucrat);
	virtual void	beExecuted(const Bureaucrat& bureaucrat) const = 0; //pure virtual function
	virtual int		checkRequirements(const Bureaucrat& bureaucrat) const;
	
	//exceptions
	class GradeTooHighException : std::exception
	{
		public:
		const char* what()
		{
			return "Exception: AForm: Grade is too high!\n";
		}
	};

	class GradeTooLowException : std::exception
	{
		public:
		const char* what()
		{
			return "Exception: AForm: Grade is too low!\n";
		}
	};

	class FormNotSignedException : std::exception
	{
		public:
		const char * what()
		{
			return "Exception: AForm: Form is not signed!\n";
		}
	};
};

std::ostream& operator <<(std::ostream &out, const AForm& Aform);

#endif