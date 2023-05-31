/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:53:43 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/31 11:12:42 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string t);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm& a);
	ShrubberyCreationForm& operator= (const ShrubberyCreationForm& a);

	void	beExecuted(const Bureaucrat& bureaucrat) const;
};

#endif