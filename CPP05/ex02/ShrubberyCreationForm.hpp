/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:53:43 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/24 19:23:38 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
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