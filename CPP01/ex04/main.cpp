/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:49:32 by rabustam          #+#    #+#             */
/*   Updated: 2023/04/12 12:29:15 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EditProgram.hpp"

int	errorHandling(int argc, char** argv)
{
	std::string	fileName, string_to_replace, replace_string;

	if (argc != 4)
	{
		std::cerr << "\033[1;33mUsage: ./edit_file <filename> <string_to_replace> <replace_string>\033[0m\n";
 		return (1);
	}
	fileName = argv[1];
	string_to_replace = argv[2];
	replace_string = argv[3];
	if (fileName.empty() || string_to_replace.empty() || replace_string.empty())
	{
		std::cerr << "\033[1;41mFilename/string_to_replace can't be empty!\033[0m\n";
 		return (2);
	}
	return (0);
}

int	main(int argc, char** argv)
{
	if (errorHandling(argc,argv))
		return (1);
	
	EditProgram program(argv[1], argv[2], argv[3]);
	program.makeReplaceFile();
	return (0);
}
