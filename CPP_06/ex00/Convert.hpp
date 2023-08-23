/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:59:06 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/23 15:35:49 by zhamdouc         ###   ########.fr       */
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
