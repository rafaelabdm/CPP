/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:45:29 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/24 20:22:32 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat ceo("Jake Holland", 1);
	std::cout << GREEN << "\nBureaucrat CEO instanciated to sign the forms: " << RESET_COLOR << ceo << std::endl;
	
	std::cout << YELLOW << "---Test 1: bureaucrat can execute the form---\n" << RESET_COLOR;
	try {
		Bureaucrat	bureaucrat("Tom", 90);
		std::cout << GREEN << "Bureaucrat instanciated: " << RESET_COLOR << bureaucrat << std::endl;

		ShrubberyCreationForm	form("Beach House");
		std::cout << GREEN << "CEO signed form: " << RESET_COLOR;
		ceo.signForm(form);
		std::cout << GREEN << "\nForm instanciated:\n" << RESET_COLOR << form; 

		std::cout << GREEN << "\nExecuting form...\n" << RESET_COLOR;
		bureaucrat.executeForm(form);
		
	} catch (AForm::GradeTooHighException& e) {
		std::cout << e.what();
	} catch (AForm::GradeTooLowException& e) {
		std::cout << e.what();
	}

	std::cout << YELLOW << "---Test 2: bureaucrat can NOT execute the form (Grade Too Low)---\n" << RESET_COLOR;
	try {
		Bureaucrat	bureaucrat("Roger", 148);
		std::cout << GREEN << "Bureaucrat instanciated: " << RESET_COLOR << bureaucrat << std::endl;

		ShrubberyCreationForm	form("Beach House");
		std::cout << GREEN << "CEO signed form: " << RESET_COLOR;
		ceo.signForm(form);
		std::cout << GREEN << "\nForm instanciated:\n" << RESET_COLOR << form; 

		std::cout << GREEN << "\nExecuting form...\n" << RESET_COLOR;
		bureaucrat.executeForm(form);
		
	} catch (AForm::GradeTooHighException& e) {
		std::cout << e.what();
	} catch (AForm::GradeTooLowException& e) {
		std::cout << e.what();
	}

	std::cout << YELLOW << "---Test 3: bureaucrat can NOT execute the form (Form Not Signed)---\n" << RESET_COLOR;
	try {
		Bureaucrat	bureaucrat("Clarice", 137);
		std::cout << GREEN << "Bureaucrat instanciated: " << RESET_COLOR << bureaucrat << std::endl;

		ShrubberyCreationForm	form("Beach House");
		std::cout << RED << "CEO did not sign form!\n" << RESET_COLOR;

		std::cout << GREEN << "\nForm instanciated:\n" << RESET_COLOR << form; 

		std::cout << GREEN << "\nExecuting form...\n" << RESET_COLOR;
		bureaucrat.executeForm(form);
		
	} catch (AForm::GradeTooHighException& e) {
		std::cout << e.what();
	} catch (AForm::GradeTooLowException& e) {
		std::cout << e.what();
	}

	return (0);
}