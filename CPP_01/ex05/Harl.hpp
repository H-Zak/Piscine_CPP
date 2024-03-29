/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:53:59 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/07/24 14:07:02 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <functional>
#include <string>

#ifndef HARL_HPP
# define HARL_HPP

class Harl{
private :
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public :
	Harl();
	void complain( std::string level );
	~Harl();
};

#endif
