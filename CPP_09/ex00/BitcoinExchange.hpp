/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zheylkoss <zheylkoss@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 21:09:05 by zheylkoss         #+#    #+#             */
/*   Updated: 2023/08/22 00:33:43 by zheylkoss        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <map>
#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>


class BitcoinExchange {

private :
    std::map<std::string , std::string> data_base;

    BitcoinExchange();
    BitcoinExchange &operator=(BitcoinExchange const &other);
public :
    BitcoinExchange(BitcoinExchange const & other);
    BitcoinExchange(std::string file);
    ~BitcoinExchange();
    std::map<std::string, std::string> get_data_base() const;
    void calcul (std::string filename);
    void parsefile(std::string filename);
    
    
    
};

#endif 