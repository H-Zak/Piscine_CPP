/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:19:04 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/06/20 18:32:37 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

std::string Contact::getfirst_name() const
{
    return (first_name);
}

std::string Contact::getlast_name() const
{
    return (last_name);
}

std::string Contact::getphone_number() const
{
    return (phone_number);
}

std::string Contact::getnick_name() const
{
    return (nick_name);
}

std::string Contact::getdarkest_secret() const
{
    return (darkest_secret);
}