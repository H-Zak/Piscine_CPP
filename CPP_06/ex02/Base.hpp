/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:06:49 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/15 16:08:43 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
// #include <math.h>


class Base {

    public:
        Base();
        virtual ~Base();

        Base *generate(void);
        void identifify(Base *p);
        void identifify(Base &p);

};

#endif
