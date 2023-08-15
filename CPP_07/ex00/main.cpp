/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:12:21 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/15 16:15:12 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"
#include <stdexcept>

int main(void) {

	int a = 1;
	int b = 5;

	std::cout  << "[BEFORE SWAP]"<< std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	std::cout  << "[MIN]"  << std::endl;
	std::cout << "min = " << ::min(a, b) << std::endl;
	std::cout << "[MAX]" << std::endl;
	std::cout << "max = " << ::max(a, b) << std::endl;

	std::cout << std::endl;

	::swap(a, b);

	std::cout  << "[AFTER SWAP]"  << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	std::cout  << "[MIN]"  << std::endl;
	std::cout << "min = " << ::min(a, b) << std::endl;
	std::cout  << "[MAX]"  << std::endl;
	std::cout << "max = " << ::max(a, b) << std::endl;
}

// int main(void) {

// 	int a = 2;
// 	int b = 3;

// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

// 	std::string c = "chaine1";
// 	std::string d = "chaine2";

// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

// 	return (0);
// }
