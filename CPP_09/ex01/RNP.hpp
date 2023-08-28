/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RNP.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:09:15 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/08/29 00:41:07 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RNP_HPP
# define RNP_HPP

#include <iostream>
#include <stack>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
class RNP
{
private :
	std::stack<float> list;

public:
	RNP();
	RNP(std::string str);
	//RNP();
	RNP(RNP const &other);
	RNP &operator=(RNP const &other);
	~RNP();
	std::stack<float> getlist(void) const;
	void	parsing(std::string str);
	void	Execute(std::string &str);
	void 	list_move(float &first, float &second, std::string str, float &result, size_t &i);
};

#endif

