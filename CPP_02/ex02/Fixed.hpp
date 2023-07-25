/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:48:33 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/20 15:13:16 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
private :
	int		n;
	static const int fractBits = 8;

public :
	Fixed();
	Fixed(const int n_value);
	Fixed(const float fractBits_value);
	Fixed(const Fixed & original);
	Fixed &operator = (const Fixed & original );
	~Fixed();
	int getRawBits(void) const ;
	void setRawBits(int const raw);
	float	toFloat(void)const;
	int toInt(void) const;

	bool	operator>( Fixed const & a ) const;
	bool	operator<( Fixed const & a ) const;
	bool	operator>=( Fixed const & a ) const;
	bool	operator<=( Fixed const & a ) const;
	bool	operator==( Fixed const & a ) const;
	bool	operator!=( Fixed const & a ) const;

	Fixed	operator+( Fixed const & a ) const;
	Fixed	operator-( Fixed const & a ) const;
	Fixed	operator*( Fixed const & a ) const;
	Fixed	operator/( Fixed const & a ) const;

	Fixed	operator++( void );
	Fixed	operator++( int );
	Fixed	operator--( void );
	Fixed	operator--( int );
	
	static	Fixed &min( Fixed &a, Fixed &b );
	static	Fixed &max( Fixed &a, Fixed &b );

	static const Fixed &min( Fixed const &a, Fixed const &b );
	static const Fixed &max( Fixed const &a, Fixed const &b );
};

/* Accesseur pour membre */
std::ostream &	operator<<( std::ostream & o, Fixed const & i );

#endif
