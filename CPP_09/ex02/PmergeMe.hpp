/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:47:39 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/08/29 21:19:07 by zhamdouc         ###   ########.fr       */
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

class Pmergeme	{
private :
	std::vector <unsigned int> _vector;
	std::deque<unsigned int>    _deque;
	clock_t		                result;
    float		                _time_vec;
	float		                _time_deq;
	
};

#endif