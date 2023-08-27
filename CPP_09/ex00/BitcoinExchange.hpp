/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 21:09:05 by zheylkoss         #+#    #+#             */
/*   Updated: 2023/08/28 00:25:40 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <map>
#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
#include <stdlib.h>



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
	typedef std::map<std::string, std::string>::iterator iterator;
    void calcul (std::string filename);
    void parsefile(std::string filename);
    void check_value(std::string line, int &error);
	void parsing_date(std::string line , size_t *i, int &error);
	void parsing_value(std::string line, size_t *i, size_t *j);
    void parse_input_file(std::string filename);

};
void year(std::string line, int &i);
void month(std::string line, int &i);
bool IsLeap (int year);
void day(std::string line, int &i);

#endif
