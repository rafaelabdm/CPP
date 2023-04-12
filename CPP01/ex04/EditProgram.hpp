/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EditProgram.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:46:54 by rabustam          #+#    #+#             */
/*   Updated: 2023/04/03 14:48:00 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EDITPROGRAM_H
# define EDITPROGRAM_H

# include <iostream>
# include <fstream>
# include <string>

class EditProgram
{
	private:
	std::string		fileName;
	std::string		originalWord;
	std::string		replaceWord;
	
	public:
	EditProgram(std::string fn, std::string ow, std::string rw);
	~EditProgram();
	std::string	readFromOriginalFile();
	std::string	editText(std::string originalText);
	void		writeToReplaceFile(std::string replaceText);
	void		makeReplaceFile();
};

#endif