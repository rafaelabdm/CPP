/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 10:06:54 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/28 11:25:42 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
	Intern();
	~Intern();
	Intern(Intern& a);
	Intern& operator= (Intern& a);
	Form* makeForm(std::string form_name, std::string form_target);
	Form* makePresidentialForm(const std::string target);
	Form* makeRobotomyForm(const std::string target);
	Form* makeShrubberyForm(const std::string target);
};

#endif