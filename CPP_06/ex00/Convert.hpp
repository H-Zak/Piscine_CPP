/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:59:06 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/15 19:58:13 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <climits>
# include <cmath>

class Convert {

private :
	double _nb;
	Convert();
	Convert(Convert const &other);
public :
	Convert( char *av );
	~Convert();
	Convert & operator=( Convert const &a );
	void    convertChar() const;
    void    convertInt() const;
    void    convertFloat() const;
    void    convertDouble() const;

    double    getNb() const;
};

#endif
