/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:06:05 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/08/30 17:15:46 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PmergeMe.hpp"
#include "Pmergeme.tpp"

bool Check_unsigned_int(char *str, std::vector<unsigned int> &_vec, std::deque<unsigned int> &_deque)
{
	char *end;
	unsigned long value = strtoul(str, &end, 10);

	if (*end != '\0' || end == str)
		return (false);
	if (value > UINT_MAX)
        return false; 
	_vec.push_back(value);
	_deque.push_back(value);
	return (true);
}

int main (int argc, char **argv)
{
	std::vector<unsigned int> _vec;
	std::deque<unsigned int> _deque;
	
	if(argc < 3)
	{
		std::cerr << "Error argument" << std::endl;
		return (1);
	}
	try
	{
		for (int i = 1; argv[i]; i++)
		{
			if (!Check_unsigned_int(argv[i], _vec, _deque))
				throw(std::invalid_argument("invalid input"));
	
		}
		Pmergeme do_it(_vec, _deque);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return (0);
}
