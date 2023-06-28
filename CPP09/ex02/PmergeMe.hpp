/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:04:28 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/28 19:43:40 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <algorithm>
# include <iostream>
# include <deque>
# include <vector>
# include <climits>
# include <cstdlib>
# include <iomanip>
# include <bits/stdc++.h>
# include <sys/time.h>

# define RESET_COLOR	"\033[0m"
# define INVERT_COLOR	"\033[7m"
# define YELLOW			"\033[0;33m"
# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"

class PmergeMe
{
	private:
	struct timeval vec_start;
	struct timeval vec_end;
	
	std::vector<int> _vector;
	std::vector< std::vector<int> > _vectorPairs;
	std::vector<int> _sVector;
	std::vector<int> _pendVector;


	struct timeval deq_start;
	struct timeval deq_end;
	
	std::deque<int> _deque;
	std::deque< std::deque<int> > _dequePairs;
	std::deque<int> _sDeque;
	std::deque<int> _pendDeque;
	
	public:
	PmergeMe();
	PmergeMe(int size, char** args);
	~PmergeMe();
	PmergeMe(const PmergeMe& a);
	PmergeMe& operator=(const PmergeMe& a);


	//	VECTOR FUNCTIONS
	void	initVector(int size, char** args);
	void	getPairsVector(void);
	void	sortPairsVector(void);
	void	sortPairsLargestVector(void);
	void	createSAndPendVectors(void);
	void	insertPendToSVector(void);

	//	DEQUE FUNCTIONS
	void	initDeque(int size, char** args);
	void	getPairsDeque(void);
	void	sortPairsDeque(void);
	void	sortPairsLargestDeque(void);
	void	createSAndPendDeques(void);
	void	insertPendToSDeque(void);

	void	printResult(void) const;

	class InvalidInputException : public std::exception
	{
		public:
		const char* what() const throw();
	};
};

#endif