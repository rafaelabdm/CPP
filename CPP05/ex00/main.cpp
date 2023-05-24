/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:39:54 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/24 11:51:47 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << YELLOW << "---Test 1: two correct Bureaucrats and one with a grade too high---\n" << RESET_COLOR;
	try {
		Bureaucrat b1;
		Bureaucrat b2("Sr. John", 45);
		
		std::cout << b1;
		std::cout << b2;
		
		Bureaucrat b3("Carlinhos", 0);
		
	} catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what();
	} catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what();
	}

	std::cout << YELLOW << "\n---Test 2: one Bureaucrat with a grade too low---\n" << RESET_COLOR;
	try {
		Bureaucrat b1("Anabelle", 151);
		
	} catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what();
	} catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what();
	}

	std::cout << YELLOW << "\n---Test 3: increment too much a Bureaucrat---\n" << RESET_COLOR;
	try {
		Bureaucrat b1("Sr. Duck", 2);
		std::cout << b1;
		b1.incrementGrade();
		std::cout << b1;
		b1.incrementGrade();
		std::cout << b1;

	} catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what();
	} catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what();
	}

	std::cout << YELLOW << "\n---Test 4: decrement too much a Bureaucrat---\n" << RESET_COLOR;
	try {
		Bureaucrat b1("Sr. Duck", 149);
		std::cout << b1;
		b1.decrementGrade();
		std::cout << b1;
		b1.decrementGrade();
		std::cout << b1;

	} catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << e.what();
	} catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << e.what();
	}
	
	std::cout << YELLOW << "\n---END TESTS---\n" << RESET_COLOR;
	return (0);
}
