/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zheylkoss <zheylkoss@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:46:06 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/08/22 00:11:00 by zheylkoss        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cerr << "couldn't open the file" << std::endl;
        return (1);
    }
    if (argc != 2)
    {
        std::cerr << "too many argument" << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    
    if (filename.size() < 4 || filename.substr(filename.size() - 4) != ".csv")
    {
        std::cerr << "wrong extension" << std::endl;
        return (1);
    }
    std::ifstream infile(argv[1]);
    std::ifstream database("data.csv");
    
    if (!database.is_open())
    {
        std::cerr << "problem with data.csv" << std::endl;
        return (1);
    }
    database.close();
    if (!infile.is_open())
    {
        std::cerr << "problem with the opening file" << std::endl;
        return (1);
    }
    infile.close();
    try
    {
        BitcoinExchange btc(filename);

        btc.calcul();
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
	
}