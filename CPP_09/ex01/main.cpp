/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:06:05 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/08/28 23:50:00 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RNP.hpp"

int main (int argc, char **argv)
{
	if(argc != 2)
	{
		std::cerr << "Error argument" << std::endl;
		return (1);
	}
	// if (argc == 2)
	// 	std::cout << "good" << std::endl;
	std::string str = argv[1];
	try
	{
		RNP calcul(str);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	return (0);
}
