/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:28:09 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/05/30 17:07:19 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

int main(int argc, char ** argv)
{
	if (argc > 1)
	{
		std::string str = argv[1];
		size_t i = 0;
		int j = 1;
		while (j < argc)
		{
			str = argv[j];
			while (i < str.length())
			{
				if( std::isalpha(str[i]))
					str[i] = std::toupper(str[i], std::locale());
				i++;
			}
			j++;
			i = 0;
			std::cout << str;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}