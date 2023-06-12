/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 10:08:13 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/12 18:22:42 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string t);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm& a);
	PresidentialPardonForm& operator= (const PresidentialPardonForm& a);

	void	execute(const Bureaucrat& executor) const;
};

#endif