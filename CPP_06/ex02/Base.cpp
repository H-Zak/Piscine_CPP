/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakariyahamdouchi <zakariyahamdouchi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:06:20 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/08/15 16:09:52 by zakariyaham      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base( void )
{
    std::cout << "Base default constructor called" << std::endl;
    return ;
}

Base::~Base() {

    std::cout << "Base default destructor called" << std::endl;
}

Base *Base::generate(void) {

    srand(time(NULL));
    int nb;
    Base *res = NULL;

    nb = rand() % 3;
    switch (nb)
    {
        case 0:
            res = new A();
            break;
        case 1:
            res = new B();
            break;
        case 2:
            res = new C();
            break;
        default:
            break;
    }

    return (res);
}

void Base::identifify(Base *p) {

    A   *a= dynamic_cast<A*>(p);
    B   *b= dynamic_cast<B*>(p);
    C   *c= dynamic_cast<C*>(p);

    if (a)
        std::cout  << "A type"  << std::endl;
    else if (b)
        std::cout  << "B type"  << std::endl;
    else if (c)
        std::cout  << "C type"  << std::endl;
    else
        std::cout  << "Error: conversion" << std::endl;
}

void Base::identifify(Base &p) {


    try {
        A   a= dynamic_cast<A&>(p);
        std::cout  << "A type" << std::endl;
    } catch (std::exception &e) {
        // std::cout << RED << "Error: conversion" << NC << std::endl;
    }
    try {
        B   b= dynamic_cast<B&>(p);
        std::cout <<  "B type"  << std::endl;
    } catch (std::exception &e) {
        // std::cout << RED << "Error: conversion" << NC << std::endl;
    }
    try {
        C   c= dynamic_cast<C&>(p);
        std::cout  << "C type" << std::endl;
    } catch (std::exception &e) {
        // std::cout << RED << "Error: conversion" << NC << std::endl;
    }
}

