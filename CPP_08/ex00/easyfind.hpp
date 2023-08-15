/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:35:04 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/15 16:35:40 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <stdexcept>


template<typename T>
void easyfind(T &a, int nb) {
    if (std::find(a.begin(), a.end(), nb) != a.end())
        std::cout << "Success: " << nb << " has been found !"  << std::endl;
    else
         throw std::invalid_argument( "Error: value not found !" );
}

#endif
