/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:37:08 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/19 18:49:22 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <cstdlib>
#include <algorithm>


class Span
{
	private:
		unsigned int		_max_size;
		std::vector<int>	_list;

	public:
		Span(unsigned int max_sixe);
		Span(const Span &);
		~Span(void);

		Span & operator=(const Span &);

		std::vector<int> const & getList() const;

		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();

		void	addMultipleNumbersAtOnce(std::vector<int>::const_iterator, std::vector<int>::const_iterator);

		class SpanIsFull : public std::exception
		{
			virtual const char * what() const throw();
		};
		class CannotFindSpan : public std::exception
		{
			virtual const char * what() const throw();
		};
};

std::ostream &	operator<<(std::ostream &, Span const &);

#endif
