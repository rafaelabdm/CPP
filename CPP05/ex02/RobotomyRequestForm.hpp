/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:32:37 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/25 09:56:02 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <cstdlib>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string t);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm& a);
	RobotomyRequestForm& operator= (const RobotomyRequestForm& a);

	void	beExecuted(const Bureaucrat& bureaucrat) const;
};

#endif