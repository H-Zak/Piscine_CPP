/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:53:59 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/07/05 18:32:27 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <functional>
#include <unordered_map>
#include <string>

#ifndef HARL_HPP
# define HARL_HPP

class Harl{
private :
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	std::unordered_map<std::string, std::function<void()>> complainMap;

public :
	Harl();
	void complain( std::string level );
	~Harl(){};
};

#endif