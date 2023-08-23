/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:23:04 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/23 16:58:28 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <stdexcept>

int main(void) {

	int tab[5];
	char charTab[7] = "01234\0";

	tab[0] = 8;
	tab[1] = 2;
	tab[2] = 0;
	tab[3] = 3;
	tab[4] = 1;

	std::cout  << "[TAB INT]"  << std::endl;
	::iter(tab, 5, addOne);

	std::cout << std::endl;

	std::cout  << "[TAB CHAR]"  << std::endl;
	::iter(charTab, 7, printData);

	std::cout  << "[TAB CLASS]" << std::endl;
	Test<int> classTab[5];

	::iter(classTab, 5, printData);
}
