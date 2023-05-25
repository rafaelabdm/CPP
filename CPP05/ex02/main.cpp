/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:45:29 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/25 10:31:58 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat ceo("Douglas Adams", 1);
	std::cout << GREEN << "\nBureaucrat CEO instanciated to sign the forms: " << RESET_COLOR << ceo << std::endl;
	
	std::cout << BLUE_BG << "                      SHRUBBERY CREATION FORM TEST                      " << RESET_COLOR;
	std::cout << YELLOW << "\n\n---Test 1: bureaucrat can execute the form---\n" << RESET_COLOR;
	try {
		Bureaucrat	bureaucrat("Tom", 90);
		std::cout << GREEN << "Bureaucrat instanciated: " << RESET_COLOR << bureaucrat << std::endl;

		ShrubberyCreationForm	form("Beach");
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

	std::cout << YELLOW << "\n---Test 2: bureaucrat can NOT execute the form (Grade Too Low)---\n" << RESET_COLOR;
	try {
		Bureaucrat	bureaucrat("Roger", 148);
		std::cout << GREEN << "Bureaucrat instanciated: " << RESET_COLOR << bureaucrat << std::endl;

		ShrubberyCreationForm	form("Home");
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

	std::cout << YELLOW << "\n---Test 3: bureaucrat can NOT execute the form (Form Not Signed)---\n" << RESET_COLOR;
	try {
		Bureaucrat	bureaucrat("Clarice", 137);
		std::cout << GREEN << "Bureaucrat instanciated: " << RESET_COLOR << bureaucrat << std::endl;

		ShrubberyCreationForm	form("Balcony");
		std::cout << RED << "CEO did not sign form!\n" << RESET_COLOR;

		std::cout << GREEN << "\nForm instanciated:\n" << RESET_COLOR << form; 

		std::cout << GREEN << "\nExecuting form...\n" << RESET_COLOR;
		bureaucrat.executeForm(form);
		
	} catch (AForm::GradeTooHighException& e) {
		std::cout << e.what();
	} catch (AForm::GradeTooLowException& e) {
		std::cout << e.what();
	}

	std::cout << "\n" << BLUE_BG << "                      ROBOTOMY REQUEST FORM TEST                      " << RESET_COLOR;
	std::cout << YELLOW << "\n\n---Test 1: bureaucrat can execute the form---\n" << RESET_COLOR;
	try {
		Bureaucrat	bureaucrat("Tom", 40);
		std::cout << GREEN << "Bureaucrat instanciated: " << RESET_COLOR << bureaucrat << std::endl;

		RobotomyRequestForm	form("ClapTrap");
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

	std::cout << YELLOW << "\n---Test 2: bureaucrat can NOT execute the form (Grade Too Low)---\n" << RESET_COLOR;
	try {
		Bureaucrat	bureaucrat("Jake", 148);
		std::cout << GREEN << "Bureaucrat instanciated: " << RESET_COLOR << bureaucrat << std::endl;

		RobotomyRequestForm	form("ScavTrap");
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

	std::cout << YELLOW << "\n---Test 3: bureaucrat can NOT execute the form (Form Not Signed)---\n" << RESET_COLOR;
	try {
		Bureaucrat	bureaucrat("Clarice", 20);
		std::cout << GREEN << "Bureaucrat instanciated: " << RESET_COLOR << bureaucrat << std::endl;

		RobotomyRequestForm	form("FragTrap");
		std::cout << RED << "CEO did not sign form!\n" << RESET_COLOR;

		std::cout << GREEN << "\nForm instanciated:\n" << RESET_COLOR << form; 

		std::cout << GREEN << "\nExecuting form...\n" << RESET_COLOR;
		bureaucrat.executeForm(form);
		
	} catch (AForm::GradeTooHighException& e) {
		std::cout << e.what();
	} catch (AForm::GradeTooLowException& e) {
		std::cout << e.what();
	}

	std::cout << "\n" << BLUE_BG << "                      PRESIDENTIAL PARDON FORM TEST                      " << RESET_COLOR;
	std::cout << YELLOW << "\n\n---Test 1: bureaucrat can execute the form---\n" << RESET_COLOR;
	try {
		Bureaucrat	bureaucrat("Tom", 5);
		std::cout << GREEN << "Bureaucrat instanciated: " << RESET_COLOR << bureaucrat << std::endl;

		PresidentialPardonForm	form("Luis");
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

	std::cout << YELLOW << "\n---Test 2: bureaucrat can NOT execute the form (Grade Too Low)---\n" << RESET_COLOR;
	try {
		Bureaucrat	bureaucrat("Tim", 6);
		std::cout << GREEN << "Bureaucrat instanciated: " << RESET_COLOR << bureaucrat << std::endl;

		PresidentialPardonForm	form("Ney");
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

	std::cout << YELLOW << "\n---Test 3: bureaucrat can NOT execute the form (Form Not Signed)---\n" << RESET_COLOR;
	try {
		Bureaucrat	bureaucrat("Clarice", 2);
		std::cout << GREEN << "Bureaucrat instanciated: " << RESET_COLOR << bureaucrat << std::endl;

		PresidentialPardonForm	form("FragTrap");
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