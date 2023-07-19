/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:19:14 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/07/19 14:11:08 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class Phonebook {
private :
	static int const Nb_contact = 8;
	Contact repertory[Nb_contact];
	int count_contact;
public:
	Phonebook();
	void addcontact(const std::string& first_name, const std::string& last_name, const std::string nickname, const std::string phonenumber, const std::string darkestsecret);
	void searchcontact();
	~Phonebook();
};
#endif