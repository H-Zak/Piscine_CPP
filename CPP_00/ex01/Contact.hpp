/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:54:51 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/07/19 13:58:48 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
En utilisant une référence (&), vous évitez la création d'une copie de l'objet. 
Au lieu de cela, la référence fait référence à l'objet existant. 
Cela permet d'économiser des ressources et d'améliorer les performances, 
en particulier lorsque vous travaillez avec des objets volumineux.

De plus, en utilisant une référence constante (const std::string&), 
vous indiquez que la référence ne peut pas être utilisée pour modifier l'objet référencé. 
Cela garantit que les paramètres du constructeur ne seront pas modifiés accidentellement 
lors de l'appel du constructeur.
*/
#include <iostream>

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
private:
    std::string    first_name;
    std::string    last_name;
    std::string    nick_name;
    std::string    phone_number;
    std::string    darkest_secret;
    
public:
    Contact();
    void mycontact(const std::string& firstname, const std::string& lastname, const std::string& nickname, const std::string& phonenumber, const std::string& darkestsecret);
    std::string getfirst_name() const;
    std::string getnick_name() const;
    std::string getphone_number() const;
    std::string getlast_name() const;
    std::string getdarkest_secret() const;
    ~Contact();
    
};

#endif