/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:36:52 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/19 18:47:09 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int max_sixe)
	: _max_size(max_sixe), _list(0)
{
}

Span::Span(const Span &ref)
{
	*this = ref;
}

Span::~Span(void)
{
}

Span & Span::operator=(const Span &ref)
{
	_max_size = ref._max_size;//rajouter un get_maxsize
	_list = ref.getList();
	return *this;
}

std::vector<int> const & Span::getList() const
{
	return _list;
}

void Span::addNumber(int n)
{
	if (_list.size() + 1 > _max_size)
		throw SpanIsFull();

	_list.push_back(n);
}

void Span::addMultipleNumbersAtOnce(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
    _list.insert(_list.begin(), begin, end);
    if (_list.size() > _max_size)
        _list.resize(_max_size);
}

int Span::shortestSpan()
{
	if (_list.size() < 2)
		throw CannotFindSpan();

	Span tmp(*this);

	std::sort(tmp._list.begin(), tmp._list.end());

	std::vector<int>::const_iterator it;

	int span = tmp.longestSpan();

	int last = tmp._list.front();
	int i = 0;
	for ( it = tmp._list.begin(); it != tmp._list.end(); ++it)
	{
		if (i > 0)
		{
			if (*it - last < span)
				span = *it - last;
			last = *it;
		}
		i++;
	}
	return span;
}

int Span::longestSpan()
{
	if (_list.size() < 2)
		throw CannotFindSpan();

	Span tmp(*this);
	std::sort(tmp._list.begin(), tmp._list.end());
	return (tmp._list.back() - tmp._list.front());
}

const char * Span::SpanIsFull::what() const throw()
{
	return "Cannot add more numbers, Span is full!";
}

const char * Span::CannotFindSpan::what() const throw()
{
	return "Not enough numbers in class, to calculate this span!";
}

std::ostream &	operator<<(std::ostream &o, Span const &ref)
{
	std::vector<int>::const_iterator it = ref.getList().begin();

	o << "[ ";
	for (; it != ref.getList().end() ; ++it)
	{
		o << *it;
		o << " ";
	}
	o << "]";

	return o;
}
