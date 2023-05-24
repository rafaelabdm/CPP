/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:39:54 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/24 14:09:09 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << YELLOW << "---Test 1: bureaucrat can sing the form---\n" << RESET_COLOR;
	try {
		Bureaucrat	bureaucrat("Sr.John", 50);
		std::cout << GREEN << "Bureaucrat instanciated: " << RESET_COLOR << bureaucrat << std::endl;

		Form		form("Get A Private Office", 50, 20);
		std::cout << GREEN << "Form instanciated:\n" << RESET_COLOR << form << std::endl;
	
		std::cout << GREEN << "Signing form..." << RESET_COLOR << std::endl; 
		bureaucrat.signForm(form);

		std::cout << GREEN << "\nUpdated Form:\n" << RESET_COLOR << form;
		
	} catch (Form::GradeTooHighException& e) {
		std::cout << e.what();
	} catch (Form::GradeTooLowException& e) {
		std::cout << e.what();
	}

	std::cout << YELLOW << "\n---Test 2: bureaucrat can not sing the form---\n" << RESET_COLOR;
	try {
		Bureaucrat	bureaucrat("Sr.Apple", 75);
		std::cout << GREEN << "Bureaucrat instanciated: " << RESET_COLOR << bureaucrat << std::endl;

		Form		form("Get A Company Car", 40, 1);
		std::cout << GREEN << "Form instanciated:\n" << RESET_COLOR << form << std::endl;
	
		std::cout << GREEN << "Signing form..." << RESET_COLOR << std::endl; 
		bureaucrat.signForm(form);

		std::cout << GREEN << "\nUpdated Form:\n" << RESET_COLOR << form;

	} catch (Form::GradeTooHighException& e) {
		std::cout << e.what();
	} catch (Form::GradeTooLowException& e) {
		std::cout << e.what();
	}
	
	std::cout << YELLOW << "\n---Test 3: form can not be instanciated (Grade Too High)---\n" << RESET_COLOR;
	try {
		Bureaucrat	bureaucrat("Sra.Teacup", 10);
		std::cout << GREEN << "Bureaucrat instanciated: " << RESET_COLOR << bureaucrat << std::endl;

		Form		form("Get To Be CEO", 0, 1);
		std::cout << GREEN << "Form instanciated:\n" << RESET_COLOR << form << std::endl;
	
		std::cout << GREEN << "Signing form..." << RESET_COLOR << std::endl; 
		bureaucrat.signForm(form);

		std::cout << GREEN << "Updated Form:\n" << RESET_COLOR << form;

	} catch (Form::GradeTooHighException& e) {
		std::cout << e.what();
	} catch (Form::GradeTooLowException& e) {
		std::cout << e.what();
	}

	std::cout << YELLOW << "\n---Test 4: form can not be instanciated (Grade Too Low)---\n" << RESET_COLOR;
	try {
		Bureaucrat	bureaucrat("Sra.Teacup", 10);
		std::cout << GREEN << "Bureaucrat instanciated: " << RESET_COLOR << bureaucrat << std::endl;

		Form		form("Get To Be CEO", 152, 1);
		std::cout << GREEN << "Form instanciated:\n" << RESET_COLOR << form << std::endl;
	
		std::cout << GREEN << "Signing form..." << RESET_COLOR << std::endl; 
		bureaucrat.signForm(form);

		std::cout << GREEN << "Updated Form:\n" << RESET_COLOR << form;

	} catch (Form::GradeTooHighException& e) {
		std::cout << e.what();
	} catch (Form::GradeTooLowException& e) {
		std::cout << e.what();
	}
	
	return (0);
}
