/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:57:06 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/07/24 14:28:21 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"


Sed::Sed()
{
		std::cout << "default Sed constructor called\n";
}

Sed::Sed(char **argv)
{
	this->file_name = argv[1];
	this->file_name += ".replace";
	this->position = 0;
	this->len_s1 = 0;
	this->s1 = argv[2];
	this->s2 = argv[3];

	std::cout << "Sed constructor called\n";
}

int Sed::do_it(char **argv)
{
	std::ofstream file(this->file_name.c_str());
	std::ifstream original(argv[1]);

	if (!this->s1.empty())
		this->len_s1 = this->s1.length();

	if (original.is_open())
	{
		while (std::getline(original, this->line))
		{
			while (1)
			{
				this->position = this->line.find(this->s1, this->position);
				if (this->position != std::string::npos)
				{
					this->line.erase(this->position, this->len_s1);
					this->line.insert(this->position, this->s2);
					this->position = this->position + this->s2.length();
				}
				else
				{
					file << this->line << std::endl;
					break ;
				}
			}
		}
		original.close();
	}
	else
	{
		std::cout << "Error during the openning of the file" << std::endl;
		return 1;
	}
	return (0);
}

Sed::~Sed()
{
	std::cout << "Sed Destructor called\n";
}