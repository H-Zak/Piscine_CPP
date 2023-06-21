/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:19:04 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/06/21 18:17:06 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

/*
Les "getters" (ou gueurs) sont des fonctions membres d'une classe qui permettent d'accéder aux valeurs des membres privés de cette classe depuis l'extérieur de la classe. Ils sont également appelés "accesseurs". Les getters jouent un rôle important dans l'encapsulation des données en fournissant une interface contrôlée pour accéder aux données encapsulées.

Voici quelques raisons pour lesquelles les getters sont utilisés :

    - Encapsulation des données : Les données membres d'une classe sont généralement déclarées comme privées pour protéger l'intégrité des données et contrôler leur accès. Les getters fournissent un moyen de lire ces données privées sans permettre une modification directe.

    - Contrôle d'accès : Les getters permettent de définir des règles spécifiques sur la façon dont les données peuvent être lues. Par exemple, vous pouvez effectuer des vérifications, des conversions ou des opérations supplémentaires avant de renvoyer la valeur. Cela permet d'assurer une utilisation sûre et cohérente des données.

    - Abstraction : Les getters fournissent une abstraction de la représentation interne des données. Ils permettent de cacher les détails d'implémentation et de fournir une interface plus simple et plus cohérente pour accéder aux données.

    - Maintien de l'encapsulation : En utilisant des getters pour accéder aux données, vous pouvez garder le contrôle sur les modifications apportées à la classe sans affecter directement les utilisateurs de la classe. Si la manière dont les données sont stockées ou calculées change, vous pouvez ajuster la logique à l'intérieur des getters sans affecter le code client qui utilise les getters.

En résumé, les getters sont utilisés pour fournir un accès contrôlé aux données membres privées d'une classe, permettant ainsi de préserver l'encapsulation et d'assurer un accès sûr et cohérent aux données.
*/
Contact::Contact()
{
    first_name = "";
    last_name = "";
    nick_name = "";
    phone_number = "";
    darkest_secret = "";
}

void Contact::mycontact(const std::string& firstname, const std::string& lastname, const std::string& nickname, const std::string& phonenumber, const std::string& darkestsecret)
{
    first_name = firstname;
    last_name = lastname;
    nick_name = nickname;
    phone_number = phonenumber;
    darkest_secret = darkestsecret;
}

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

Contact::~Contact()
{
    
}