/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:25:31 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/06/20 19:04:42 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

Phonebook::Phonebook():count_contact(0)
{
    int i = 0;
    while (i < Nb_contact)
    {
        repertoire[i] = nullptr;
        i++;
    }
}