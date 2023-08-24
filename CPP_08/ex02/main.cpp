/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:42:05 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/24 19:18:07 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	std::cout << "[ ";
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << "]" << std::endl;

	std::stack<int> s(mstack);
	return 0;
}	

// int main()
// {
//     std::list<int> myList;

//     myList.push_back(5);
//     myList.push_back(17);

//     std::cout << myList.back() << std::endl;

//     myList.pop_back();

//     std::cout << myList.size() << std::endl;

//     myList.push_back(3);
//     myList.push_back(5);
//     myList.push_back(737);
//     myList.push_back(0);

//     std::list<int>::iterator it = myList.begin();
//     std::list<int>::iterator ite = myList.end();

//     ++it;
//     --it;
//     std::cout << "[ ";
//     while (it != ite)
//     {
//         std::cout << *it << " ";
//         ++it;
//     }
//     std::cout << "]" << std::endl;

//     return 0;
// }
