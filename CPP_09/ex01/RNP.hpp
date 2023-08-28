/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RNP.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:09:15 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/08/28 19:02:34 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RNP_HPP
# define RNP_HPP

#include <iostream>
#include <stack>


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
	void parsing(std::string str);

};

#endif 
//deux chiffre pour commencer
//un operateur pour finir
// peu avoir un enchainement d'operateur ou de chiffre
//push sur stack jusqu'a operator puis appliquer operateur sur les 2 premiers