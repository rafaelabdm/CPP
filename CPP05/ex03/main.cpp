/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:45:29 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/28 11:59:59 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat	ceo("CEO", 1);

	Form* presidentialForm;
	Form* robotomyForm;
	Form* shrubberyForm;
	Form* wrongForm;
	Intern randomIntern;

	std::cout << YELLOW << "--------- Presidential Form Test ---------\n\n" << RESET_COLOR;
	presidentialForm = randomIntern.makeForm("presidential pardon", "Robert");
	
	std::cout << YELLOW << "\nForm informations:\n" << RESET_COLOR;
	std::cout << *presidentialForm;
	
	std::cout << YELLOW << "\nTest Functionalities:\n" << RESET_COLOR;
	ceo.signForm(*presidentialForm);
	ceo.executeForm(*presidentialForm);



	std::cout << YELLOW << "\n--------- Robotomy Form Test ---------\n\n" << RESET_COLOR;
	robotomyForm = randomIntern.makeForm("robotomy request", "Marvin");
	
	std::cout << YELLOW << "\nForm informations:\n" << RESET_COLOR;
	std::cout << *robotomyForm;

	std::cout << YELLOW << "\nTest Functionalities:\n" << RESET_COLOR;
	ceo.signForm(*robotomyForm);
	ceo.executeForm(*robotomyForm);



	std::cout << YELLOW << "\n--------- Shrubbery Form Test ---------\n\n" << RESET_COLOR;
	shrubberyForm = randomIntern.makeForm("shrubbery creation", "Beach");
	
	std::cout << YELLOW << "\nForm informations:\n" << RESET_COLOR;
	std::cout << *shrubberyForm;

	std::cout << YELLOW << "\nTest Functionalities:\n" << RESET_COLOR;
	ceo.signForm(*shrubberyForm);
	ceo.executeForm(*shrubberyForm);


	std::cout << YELLOW << "\n--------- Wrong Form Test ---------\n\n" << RESET_COLOR;
	wrongForm = randomIntern.makeForm("test form", "abcd-e");
	
	delete presidentialForm;
	delete robotomyForm;
	delete shrubberyForm;
	delete wrongForm;
	return (0);
}