/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:22:19 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/15 16:24:14 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <iomanip>

template <typename T>
void	iter(T *tab, int len, void f(const T &element))
{
    for (int i = 0; i < len; i++)
        f(tab[i]);
}

// FUNCTIONS FOR THE TEST  //
template <typename T>
void	addOne(T & a)
{
    std::cout << a + 1 << std::endl;
}

template <typename T>
void	printData(T & a)
{
    std::cout << a << std::endl;
}

// CLASS FOR THE TEST ^ //
template <typename T>
class Test {

    private:
        int _nb;

    public:
        Test( void ) { this->_nb = 6; return; };
        Test( Test const &other ) { *this=other; };
        ~Test( void ) { return; };

        Test &operator=( Test const &a ) { this->_nb = a.getNb(); return (*this); };

        int getNb() const { return this->_nb; };
};

std::ostream &operator<<(std::ostream &o, Test<int> const &src) { o << src.getNb(); return (o); }

#endif
