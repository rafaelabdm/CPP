/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:59:47 by rabustam          #+#    #+#             */
/*   Updated: 2023/06/28 19:51:11 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::PmergeMe(int size, char** args)
{
	if (size < 2)
		throw InvalidInputException();

	for (int i = 1; i < size; i++)
	{
		for (int j = 0; args[i][j] != '\0'; j++)
		{
			if (!std::isdigit(args[i][j]))
				throw InvalidInputException();
		}
	}
	
	//vector
	gettimeofday(&vec_start, NULL);
	initVector(size, args);
	getPairsVector();
	sortPairsVector();
	sortPairsLargestVector();
	createSAndPendVectors();
	insertPendToSVector();
	gettimeofday(&vec_end, NULL);

	// deque
	gettimeofday(&deq_start, NULL);
	initDeque(size, args);
	getPairsDeque();
	sortPairsDeque();
	sortPairsLargestDeque();
	createSAndPendDeques();
	insertPendToSDeque();
	gettimeofday(&deq_end, NULL);

	printResult();
}


PmergeMe::~PmergeMe()
{

}

PmergeMe::PmergeMe(const PmergeMe& a)
{
	(void) a;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& a)
{
	(void) a;
	return (*this);
}


//	VECTOR FUNCTIONS
void	PmergeMe::initVector(int size, char** args)
{
	int	current_value;

	for (int i = 0; i < (size - 1); i++)
	{
		current_value = std::strtol(args[i + 1], NULL, 10);
		if (current_value < 0 || current_value > INT_MAX)
			throw InvalidInputException();
		_vector.push_back(current_value);
	}
}

void	PmergeMe::getPairsVector(void)
{
	int count;
	std::vector<int> *temp;

	count = 1;
	temp = new std::vector<int>;
	for	(std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++)
	{
		temp->push_back(*it);
		if (count % 2 == 0)
		{
			_vectorPairs.push_back(*temp);
			delete temp;
			temp = new std::vector<int>;
		}
		count++;
	}
	if (temp->size() == 1)
	{
		temp->push_back(-1);
		_vectorPairs.push_back(*temp);
	}
	delete temp;

}

void	PmergeMe::sortPairsVector(void)
{
	for (size_t i = 0; i < _vectorPairs.size(); i++)
	{
		std::sort(_vectorPairs[i].begin(), _vectorPairs[i].end());
	}
}

void	PmergeMe::sortPairsLargestVector(void)
{
	for (size_t i = 0; i < _vectorPairs.size() - 1; i++)
	{
		for (size_t j = i + 1; j < _vectorPairs.size(); j++)
		{
			if (_vectorPairs[i][1] > _vectorPairs[j][1])
				_vectorPairs[i].swap(_vectorPairs[j]);
		}
	}
}

void	PmergeMe::createSAndPendVectors(void)
{
	for (size_t i = 0; i < _vectorPairs.size(); i++)
	{
		_pendVector.push_back(_vectorPairs[i][0]);
		_sVector.push_back(_vectorPairs[i][1]);
	}
}

void PmergeMe::insertPendToSVector(void)
{
	for (std::vector<int>::iterator it_pend = _pendVector.begin(); it_pend < _pendVector.end(); it_pend++)
	{
		for (std::vector<int>::iterator it_s = _sVector.begin(); it_s <= _sVector.end(); it_s++)
		{
			if (*it_pend < *it_s)
			{
				_sVector.insert(it_s, *it_pend);
				break ;
			}
			else if (it_s == _sVector.end())
				_sVector.push_back(*it_pend);
		}
	}
	if (_sVector[0] < 0)
		_sVector.erase(_sVector.begin());
}

//	DEQUE FUNCTIONS

void	PmergeMe::initDeque(int size, char** args)
{
	int	current_value;

	for (int i = 0; i < (size - 1); i++)
	{
		current_value = std::strtol(args[i + 1], NULL, 10);
		if (current_value < 0 || current_value > INT_MAX)
			throw InvalidInputException();
		_deque.push_back(current_value);
	}
}

void	PmergeMe::getPairsDeque(void)
{
	int count;
	std::deque<int> *temp;

	count = 1;
	temp = new std::deque<int>;
	for	(std::deque<int>::iterator it = _deque.begin(); it != _deque.end(); it++)
	{
		temp->push_back(*it);
		if (count % 2 == 0)
		{
			_dequePairs.push_back(*temp);
			delete temp;
			temp = new std::deque<int>;
		}
		count++;
	}
	if (temp->size() == 1)
	{
		temp->push_back(-1);
		_dequePairs.push_back(*temp);
	}
	delete temp;

}

void	PmergeMe::sortPairsDeque(void)
{
	for (size_t i = 0; i < _dequePairs.size(); i++)
	{
		std::sort(_dequePairs[i].begin(), _dequePairs[i].end());
	}
}

void	PmergeMe::sortPairsLargestDeque(void)
{
	for (size_t i = 0; i < _dequePairs.size() - 1; i++)
	{
		for (size_t j = i + 1; j < _dequePairs.size(); j++)
		{
			if (_dequePairs[i][1] > _dequePairs[j][1])
				_dequePairs[i].swap(_dequePairs[j]);
		}
	}
}

void	PmergeMe::createSAndPendDeques(void)
{
	for (size_t i = 0; i < _dequePairs.size(); i++)
	{
		_pendDeque.push_back(_dequePairs[i][0]);
		_sDeque.push_back(_dequePairs[i][1]);
	}
}

void PmergeMe::insertPendToSDeque(void)
{
	for (std::deque<int>::iterator it_pend = _pendDeque.begin(); it_pend < _pendDeque.end(); it_pend++)
	{
		for (std::deque<int>::iterator it_s = _sDeque.begin(); it_s <= _sDeque.end(); it_s++)
		{
			if (*it_pend < *it_s)
			{
				_sDeque.insert(it_s, *it_pend);
				break ;
			}
			else if (it_s == _sDeque.end())
				_sDeque.push_back(*it_pend);
		}
	}
	if (_sDeque[0] < 0)
		_sDeque.erase(_sDeque.begin());
}

void	PmergeMe::printResult(void) const
{
	double vec_time;
	double deq_time;
 
    vec_time = (vec_end.tv_sec - vec_start.tv_sec) * (double)1000000;
    vec_time = (vec_time + (vec_end.tv_usec - vec_start.tv_usec));

	deq_time = (deq_end.tv_sec - deq_start.tv_sec) * (double)1000000;
    deq_time = (deq_time + (deq_end.tv_usec - deq_start.tv_usec));
	
	std::cout << YELLOW << "Before: " << RESET_COLOR;
	for (std::vector<int>::const_iterator it = _vector.begin(); it != _vector.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	
	std::cout << YELLOW << "After: " << RESET_COLOR;
	for (std::vector<int>::const_iterator it = _sVector.begin(); it != _sVector.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::cout << YELLOW << "Time to process a range of " << std::fixed << std::setprecision(6) << _vector.size() << " elements with std::vector => " << RESET_COLOR << vec_time << " us" << std::endl;
	std::cout << YELLOW << "Time to process a range of " << std::fixed << std::setprecision(6) << _deque.size() << " elements with std::deque => " << RESET_COLOR << deq_time << " us" << std::endl;
}

const char* PmergeMe::InvalidInputException::what() const throw()
{
	return "Exception: invalid input.";
}
