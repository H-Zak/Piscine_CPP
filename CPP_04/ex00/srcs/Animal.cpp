/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:52:10 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/07/13 18:14:40 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default Constructor called " << std::endl;
	this->type = " ";
}

Animal::Animal(std::string type)
{
	std::cout << "Animal type Constructor called " << std::endl;
	this->type = type;
}

Animal::Animal (const Animal &other)
{
	
}