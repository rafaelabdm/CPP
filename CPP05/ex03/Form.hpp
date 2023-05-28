/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:47:55 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/28 10:40:56 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	protected:
	const std::string	name;
	bool				is_signed;
	const unsigned int	required_grade_to_sign;
	const unsigned int	required_grade_to_execute;
	std::string			target;
	
	public:
	Form();
	Form(std::string n, int rgs, int rge);
	virtual ~Form();
	Form(const Form& a);
	Form& operator= (const Form& a);
	
	//getters
	virtual std::string		getName(void) const;
	virtual bool			getIsSigned(void) const;
	virtual unsigned int	getRequiredGradeToSign(void) const;
	virtual unsigned int	getRequiredGradeToExecute(void) const;
	virtual std::string		getTarget(void) const;

	//other member functions
	virtual void	beSigned(const Bureaucrat& bureaucrat);
	virtual void	beExecuted(const Bureaucrat& bureaucrat) const;
	virtual int		checkRequirements(const Bureaucrat& bureaucrat) const;
	
	//exceptions
	class GradeTooHighException : std::exception
	{
		public:
		const char* what()
		{
			return "Exception: Form: Grade is too high!\n";
		}
	};

	class GradeTooLowException : std::exception
	{
		public:
		const char* what()
		{
			return "Exception: Form: Grade is too low!\n";
		}
	};

	class FormNotSignedException : std::exception
	{
		public:
		const char * what()
		{
			return "Exception: Form: Form is not signed!\n";
		}
	};
};

std::ostream& operator <<(std::ostream &out, const Form& Aform);

#endif