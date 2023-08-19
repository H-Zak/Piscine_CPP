/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:34:45 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/19 18:39:49 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    try {
        std::vector<int> v1;

        v1.push_back(10);
        v1.push_back(20);
        v1.push_back(30);
        v1.push_back(40);
        v1.push_back(50);

        ::easyfind(v1, 50);

    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::vector<int> v1;

        v1.push_back(10);
        v1.push_back(20);
        v1.push_back(30);
        v1.push_back(40);
        v1.push_back(50);

        ::easyfind(v1, 1110);

    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::vector<char> v1;

        v1.push_back('A');
        v1.push_back('B');
        v1.push_back('C');
        v1.push_back('D');
        v1.push_back('E');

        ::easyfind(v1, 'A');

    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::vector<char> v1;

        v1.push_back('A');
        v1.push_back('B');
        v1.push_back('C');
        v1.push_back('D');
        v1.push_back('E');

        ::easyfind(v1, 'Z');

    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
