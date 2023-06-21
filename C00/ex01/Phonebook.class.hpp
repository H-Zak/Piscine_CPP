/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:19:14 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/06/21 17:27:04 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"
#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class Phonebook {
private :
	static int const Nb_contact = 8;
	Contact repertory[Nb_contact];
	int count_contact = 0;
public:
	Phonebook();
	void addcontact(const std::string& first_name, const std::string& last_name, const std::string nickname, const std::string phonenumber, const std::string darkestsecret);
	void searchcontact(int index);
	~Phonebook();
};
#endif