/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:55:22 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/07/24 14:16:57 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <fstream>
#include <iostream>

class Sed
{
private :
	std::string line;
	std::string file_name;
	size_t position;
	int	len_s1;
	std::string s1;
	std::string s2;

public :
	Sed();
	Sed(char **argv);
	int do_it(char **argv);
	~Sed();
};

#endif