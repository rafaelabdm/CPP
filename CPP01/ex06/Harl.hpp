/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:22:10 by rabustam          #+#    #+#             */
/*   Updated: 2023/04/18 15:22:36 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
	private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

	public:
	Harl();
	~Harl();
	void complain( std::string level );
};

#endif
