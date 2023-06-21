/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:25:31 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/06/21 18:28:02 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

/*
En C++, la notation const std::string& pour les arguments de la fonction indique une référence constante à un objet de type std::string. Une référence permet d'accéder à un objet existant sans effectuer de copie, tandis que le qualificatif const indique que l'objet référencé ne peut pas être modifié à travers cette référence.

L'utilisation de références constantes présente plusieurs avantages :

Économie de mémoire : Les références constantes permettent de passer des objets sans effectuer de copie. Cela est particulièrement utile pour les objets volumineux comme les chaînes de caractères (std::string), car cela évite les opérations coûteuses de copie d'objets.

Protection contre les modifications accidentelles : En utilisant const, vous indiquez que la référence ne peut pas modifier l'objet référencé. Cela fournit une garantie de non-modification, empêchant ainsi toute modification accidentelle de l'objet.

Flexibilité d'utilisation : Les références constantes peuvent être utilisées avec des objets existants, y compris des objets temporaires. Cela permet de les utiliser dans des expressions et de passer des valeurs littérales directement à une fonction sans avoir à créer de variables supplémentaires.

En C, cette syntaxe n'est pas utilisée car le langage C ne dispose pas de références comme en C++. Cependant, il existe une équivalence approximative en utilisant des pointeurs const en C pour obtenir des résultats similaires.

Il est important de noter que les références constantes en C++ offrent une sémantique plus sûre et plus intuitive pour le passage d'arguments par référence sans modification. Cela fait partie des fonctionnalités supplémentaires fournies par C++ par rapport à C.
*/
Phonebook::Phonebook():count_contact(0)
{
    // int i = 0;
    // while (i < Nb_contact)
    // {
    //     repertory[i] = Contact();
    //     i++;
    // }
}

void Phonebook::addcontact(const std::string& firstname, const std::string& lastname, const std::string nickname, const std::string phonenumber, const std::string darkestsecret)
{
    if (count_contact == 7)
        count_contact = 0;
    repertory[count_contact].mycontact(firstname, lastname, nickname, phonenumber, darkestsecret);
    count_contact++;
}

void Phonebook::searchcontact(int index)
{
    if (index <= count_contact)
    {
        std::cout << repertory[index].getdarkest_secret();
        std::cout << repertory[index].getfirst_name();
        std::cout << repertory[index].getlast_name();
        std::cout << repertory[index].getnick_name();
        std::cout << repertory[index].getphone_number() << std::endl;
    }
    else
        std::cout << "Index incorrect\n";
    //inde doit etre inferieur ou egale a count_contact
    //imprimer repertory[index]
}

Phonebook::~Phonebook()
{
}