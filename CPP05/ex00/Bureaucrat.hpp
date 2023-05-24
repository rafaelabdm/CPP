/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:12:52 by rabustam          #+#    #+#             */
/*   Updated: 2023/05/24 11:53:15 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

# define YELLOW "\033[0;33m"
# define RESET_COLOR "\033[0m"

class Bureaucrat
{
	private:
	const std::string	name;
	unsigned int		grade;

	public:
	Bureaucrat();
	Bureaucrat(const std::string n, unsigned int g);
	Bureaucrat(const Bureaucrat& a);
	~Bureaucrat();
	Bureaucrat& operator= (const Bureaucrat& a);
	std::string		getName(void) const;
	unsigned int	getGrade(void) const;
	void			incrementGrade(void);
	void			decrementGrade(void);

	class GradeTooHighException : public std::exception
	{
		public:
		const char* what()
		{
			return "Exception: Bureaucrat's grade is too high!\n";
		}
	};

	class GradeTooLowException : public std::exception
	{
		public:
		const char* what()
		{
			return "Exception: Bureaucrat's grade is too low!\n";
		}
	};
};

// (<<) overload 
std::ostream& operator <<(std::ostream &out, const Bureaucrat& bureaucrat);

#endif