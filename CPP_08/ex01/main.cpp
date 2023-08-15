/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:37:25 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/15 16:40:22 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span	sp = Span(3);     // list of 5 elements max

	std::cout << "Initial list: " << sp << std::endl;
	try
	{
		std::cout << "Test: " << "Trying to get shortest span of an empty list:" << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "Test: " << "Now adding one number" << std::endl;
	sp.addNumber(3);
	std::cout << sp << std::endl;
	try
	{
		std::cout << "Test: " << "Trying to get shortest span in list:" << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "Test: " << "Now adding more numbers one by one:" << std::endl;
	sp.addNumber(17);
	sp.addNumber(7);
	std::cout << sp << std::endl;
	try
	{
		std::cout << "Test: " << "Trying to add one more number:" << std::endl;
		sp.addNumber(42);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	try
	{
		std::cout << "Test: " << "Trying to get shortest span in list" << std::endl;
		std::cout << "Shortest span: [" << sp.shortestSpan() << "]" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}


	std::cout << "Lets create a new list and add multiple numbers at once:" << std::endl;
	Span newList(10);
	newList.addNumber(42);
	std::vector<int>::const_iterator begin = sp.getList().begin();
	std::vector<int>::const_iterator end = sp.getList().end();

	newList.addMultipleNumbersAtOnce(begin, end);
	newList.addMultipleNumbersAtOnce(begin, end);

	std::cout << "New list:\n" << newList << std::endl;

	std::cout << "Shortest span: [" << newList.shortestSpan() << "]" << std::endl;
	std::cout << "Longest span:  [" << newList.longestSpan() << "]" << std::endl;
	std::cout << std::endl;


	return 0;
}

// int main()
// {
//     Span sp = Span(5);

//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);

//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;
//     return 0;
// }
