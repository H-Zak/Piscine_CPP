/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:47:36 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/08/30 17:23:24 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include "Pmergeme.tpp"


Pmergeme::Pmergeme()
{
	return ;
}

Pmergeme::~Pmergeme()
{
	return ;
}

/* int main() {
    std::vector<int> vec = {2, 5, 1, 6, 7, 3, 8, 4, 9};

    return 0;
} */

Pmergeme::Pmergeme(std::vector<unsigned int> _vec, std::deque<unsigned int> deque)
{
	//temps de depart
    sort(_vec, 0, _vec.size() - 1);
    for (std::vector<unsigned int>::const_iterator it = _vec.begin(); it != _vec.end(); ++it) {
    _vector.push_back(*it);
	}

	for (std::vector<unsigned int>::iterator it = _vec.begin(); it != _vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    sort(deque, 0, deque.size() - 1);
   	for (std::deque<unsigned int>::const_iterator ite = deque.begin(); ite != deque.end(); ++ite) {
    _deque.push_back(*ite);
	}

	for (std::deque<unsigned int>::iterator ite = _deque.begin(); ite != _deque.end(); ++ite) {
     std::cout << *ite << " ";
    }
    std::cout << std::endl;
	
}



