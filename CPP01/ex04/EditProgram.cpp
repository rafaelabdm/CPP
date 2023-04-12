/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EditProgram.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:11:55 by rabustam          #+#    #+#             */
/*   Updated: 2023/04/12 13:59:12 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EditProgram.hpp"

EditProgram::EditProgram(std::string fn, std::string ow, std::string rw)
{
	this->fileName = fn;
	this->originalWord = ow;
	this->replaceWord = rw;
}

EditProgram::~EditProgram()
{
}

std::string	EditProgram::readFromOriginalFile()
{
	std::ifstream originalFile;
	std::string line;
	std::string originalText;

	originalFile.open(this->fileName.data());
	if (originalFile.is_open())
	{
		while (getline (originalFile, line))
		{
			originalText.append(line);
			originalText.append("\n");
		}
		originalFile.close();
	}
	return (originalText);
}

std::string	EditProgram::editText(std::string originalText)
{
	std::string replaceText;
	int			index;
	
	index = originalText.find(this->originalWord);
	while (index != -1)
	{
		replaceText.append(originalText.substr(0, index));
		replaceText.append(this->replaceWord);
		
		originalText = &originalText[index + this->originalWord.length()];
		index = originalText.find(this->originalWord);
	}
	if (originalText[0])
		replaceText.append(originalText);

	return (replaceText);
}


void	EditProgram::writeToReplaceFile(std::string replaceText)
{
	std::ofstream	replaceFile;
	std::string		replaceFileName;
	int				dot;

	dot = this->fileName.rfind(".");
	if (dot > 0)
		replaceFileName = this->fileName.substr(0, dot).append(".replace");
	else
		replaceFileName = this->fileName.append(".replace");
	replaceFile.open(replaceFileName.data());
	replaceFile << replaceText;
	replaceFile.close();
}

void	EditProgram::makeReplaceFile()
{
	std::string originalText;
	std::string replaceText;

	originalText = readFromOriginalFile();
	replaceText = editText(originalText);
	writeToReplaceFile(replaceText);
}
