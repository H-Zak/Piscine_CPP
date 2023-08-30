/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:47:39 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/08/30 17:23:38 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <exception>
#include <string>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <time.h>
#include <deque>
#include <climits>
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>


const int THRESHOLD = 2;

class Pmergeme	{
private :
	std::vector<unsigned int> _vector;
	std::deque<unsigned int>    _deque;
	// clock_t		                result;
    // float		                _time_vec;
	// float		                _time_deq;
	Pmergeme();
public :
	Pmergeme(std::vector<unsigned int> _vector, std::deque<unsigned int> _deque);
	~Pmergeme();
	template <typename Container>
	void insertionSort(Container& arr, int start, int end);
	template <typename Container>
	void merge(Container& arr, int start, int mid, int end);
	template <typename Container>
	void sort(Container& arr, int start, int end);
};

#endif