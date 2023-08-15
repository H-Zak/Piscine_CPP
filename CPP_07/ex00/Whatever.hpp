/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:12:43 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/16 01:09:51 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <iomanip>

template <typename T>
void	swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T     min(T const &a, T const &b)
{
    if (a < b)
        return (a);
    return (b);
}

template <typename T>
T     max(T const &a, T const &b)
{
    if (a > b)
        return (a);
    return (b);
}

#endif
