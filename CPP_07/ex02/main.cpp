/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:27:52 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/23 18:53:31 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Array.hpp"


#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers();
    // int* mirror = new int[MAX_VAL];

    // srand(time(NULL));

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     const int value = rand();
    //     numbers[i] = value;
    //     mirror[i] = value;
    //     // std::cout << numbers[i] << std::endl;
    // }

    // std::cout << numbers[0] << " | " << mirror[0] << std::endl;
    // std::cout << numbers[1] << " | " << mirror[1] << std::endl;
    // std::cout << numbers[2] << " | " << mirror[2] << std::endl;
    // std::cout << numbers[3] << " | " << mirror[3] << std::endl;
    // std::cout << numbers[4] << " | " << mirror[4] << std::endl;

    // //SCOPE
    // {
    //     Array<int> tmp = numbers;
    //     Array<int> test(tmp);

    //     std::cout << "tmp: " << tmp[0] << std::endl;
    //     std::cout << "tmp: " << tmp[1] << std::endl;
    //     std::cout << "tmp: " << tmp[2] << std::endl;
    //     std::cout << "tmp: " << tmp[3] << std::endl;
    //     std::cout << "tmp: " << tmp[4] << std::endl;
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     if (mirror[i] != numbers[i])
    //     {
    //         std::cerr << "didn't save the same value!!" << std::endl;
    //         return 1;
    //     }
    // }

    // try
    // {
    //     numbers[-2] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // try
    // {
    //     numbers[MAX_VAL] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     numbers[i] = rand();
    // }

    // delete [] (mirror);

    // std::cout << std::endl;

    // std::cout  << "[" << "TEST NULL ARRAY" << "]"  << std::endl;
    // Array<int> emptyArray; // Create an empty Array object

    // std::cout << "Size of emptyArray: " << emptyArray.size() << std::endl;

    // try {
    //     emptyArray[0] = 42; // Access the first element of the empty array (out of range)
    // } catch (const std::exception& e) {
    //     std::cerr << "Exception caught: " << e.what() << std::endl;
    // }

    return (0);
}
