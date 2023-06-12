/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:07:04 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/12 17:33:40 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
	const std::string name;
	bool is_signed;
	const unsigned int required_grade_to_sign;
	const unsigned int required_grade_to_execute;
	
	public:
	Form();
	Form(std::string n, int rgs, int rge);
	~Form();
	Form(const Form& a);
	Form& operator= (const Form& a);
	
	//getters
	std::string getName(void) const;
	bool getIsSigned(void) const;
	unsigned int getRequiredGradeToSign(void) const;
	unsigned int getRequiredGradeToExecute(void) const;

	//other member functions
	void	beSigned(const Bureaucrat& bureaucrat);
	
	//exceptions
	class GradeTooHighException : std::exception
	{
		public:
		const char* what();
	};

	class GradeTooLowException : std::exception
	{
		public:
		const char* what();
	};
};

std::ostream& operator <<(std::ostream &out, const Form& form);

#endif