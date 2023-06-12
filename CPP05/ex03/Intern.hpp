/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 10:06:54 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/12 18:29:55 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
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
	AForm* makeForm(std::string form_name, std::string form_target);
	AForm* makePresidentialForm(const std::string target);
	AForm* makeRobotomyForm(const std::string target);
	AForm* makeShrubberyForm(const std::string target);
};

#endif