/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 10:08:13 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/28 10:22:07 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string t);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm& a);
	PresidentialPardonForm& operator= (const PresidentialPardonForm& a);

	void	beExecuted(const Bureaucrat& bureaucrat) const;
};

#endif