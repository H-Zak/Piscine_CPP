/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:06:49 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/16 18:55:11 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>



class Base {

    public:
        Base();
        virtual ~Base();

        Base *generate(void);
        void identifify(Base *p);
        void identifify(Base &p);

};

#endif
