/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:06:05 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/08/28 19:04:41 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RNP.hpp"

int main (int argc, char **argv)
{
	if(argc != 1)
	{
		std::cerr << "Error argument" << std::endl;
		return (1);
	}
	
	std::string str = argv[1];
	
}