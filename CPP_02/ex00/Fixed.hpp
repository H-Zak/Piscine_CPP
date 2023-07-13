/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:48:33 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/06 18:05:52 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed{
private :
	int		n;
	static const int fractBits = 8;

public :
	Fixed();
	Fixed(const Fixed & original);
	Fixed &operator = (const Fixed & original );
	~Fixed();
	int getRawBits(void) const ;
	void setRawBits(int const raw);
};

#endif
