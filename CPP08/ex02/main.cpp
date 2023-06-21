/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:03:13 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/21 11:22:01 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
	std::cout << YELLOW << "\n----------Stack Member Functions Test----------\n\n" << RESET_COLOR;
	MutantStack<int> mstack;
	
	std::cout << GREEN << "mstack.push(9);\n" << RESET_COLOR;
	mstack.push(9);
	std::cout << GREEN << "mstack.push(17);\n\n" << RESET_COLOR;
	mstack.push(17);
	
	std::cout <<"Top of my stack: " << mstack.top() << std::endl;
	std::cout << "Size of mystack: " << mstack.size() << std::endl;
	
	std::cout << GREEN << "\nmstack.pop();\n\n" << RESET_COLOR;
	mstack.pop();
	
	std::cout << "Top of my stack now: " << mstack.top() << std::endl;
	std::cout << "Size of mystack: " << mstack.size() << std::endl;
	
	std::cout << GREEN << "\nmstack.push(3);\n" << RESET_COLOR;
	mstack.push(3);
	std::cout << GREEN << "mstack.push(5);\n" << RESET_COLOR;
	mstack.push(5);
	std::cout << GREEN << "mstack.push(737);\n" << RESET_COLOR;
	mstack.push(737);
	std::cout << GREEN << "mstack.push(0);\n" << RESET_COLOR;
	mstack.push(0);
	
	std::cout << "\nTop of my stack: " << mstack.top() << std::endl;

	std::cout << "Size of mystack: " << mstack.size() << "\n";

	std::cout << YELLOW << "\n----------Iterators Test----------\n\n" << RESET_COLOR;
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	std::cout << GREEN << "foward operator...\n" << RESET_COLOR;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	MutantStack<int>::reverse_iterator sit = mstack.rbegin();
	MutantStack<int>::reverse_iterator site = mstack.rend();
	
	std::cout << GREEN << "reverse operator...\n" << RESET_COLOR;
	while (sit != site)
	{
		std::cout << *sit << std::endl;
		++sit;
	}
	
	std::cout << GREEN << "\nCreating a std::stack object from mystack\n" << RESET_COLOR;
	std::stack<int> s(mstack);
	std::cout << "new stack top: " << s.top() << std::endl;
	std::cout << "new stack size: " << s.size() << std::endl;
	
	return 0;
}
