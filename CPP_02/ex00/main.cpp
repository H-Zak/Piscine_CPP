/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:46:43 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/06 18:15:27 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	Fixed& copy_a = a;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	c.setRawBits(5);
	std::cout << "HEllo\n";
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	b.setRawBits(5);
	copy_a.setRawBits(6);
	std::cout << b.getRawBits() << std::endl;
	std::cout << a.getRawBits() << std::endl;

	return 0;
}
