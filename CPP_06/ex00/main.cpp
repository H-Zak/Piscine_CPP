/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:58:47 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/23 15:42:18 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <stdexcept>

void	convertArg(char *av)
{
	Convert convert(av);

	convert.convertChar();
	convert.convertInt();
	convert.convertFloat();
	convert.convertDouble();
}

int main(int ac, char **av) {

	if (ac == 2)
		convertArg(av[1]);
	else
		std::cout << "Error: wrong argument" << std::endl;
}
