/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:25:31 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/07/19 14:20:46 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <sstream>

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

void Phonebook::searchcontact()
{
	if (count_contact == 0)
	{
		std::cout << "you need to have contact to check them" << std::endl;
		return ;
	}
	/*
	quand le user tappera Search, j'afficherai la liste des contacts qui existe
	puis je lui demanderai de choisir le contact qu'il souhaite 
	et je devrai afficher ligne par ligne les informations
	*/
	//afficher le titre des colonne (index, first name, last name, nick name)
	std::cout << std::setw(10) << std::right << "index" << "|"
			<< std::setw(10) << std::right << "first name" << "|"
			<< std::setw(10) << std::right << "last name" << "|"
			<< std::setw(10) << std::right << "nick name" << std::endl;
	//faire une boucle car je dois afficher en premier lieu tout les contacts
	//faire des copies aussi des strings pour les manipulers
	int i = 0;
	std::string copy_firstname, copy_lastname, copy_nickname;
	while (i < count_contact)
	{
		std::cout << std::setw(10) << i << "|";
		
		copy_firstname = repertory[i].getfirst_name();
		if (copy_firstname.length() > 10)
			copy_firstname = copy_firstname.substr(0, 9) + '.';
		std::cout << std::setw(10) << std::right  << copy_firstname << "|";
		
		copy_lastname = repertory[i].getlast_name();
		if (copy_lastname.length() > 10)
			copy_lastname = copy_lastname.substr(0, 9) + '.';
		std::cout << std::setw(10) << std::right  << copy_lastname << "|";
		
		copy_nickname = repertory[i].getnick_name();
		if (copy_nickname.length() > 10)
			copy_nickname = copy_nickname.substr(0, 9) + '.';
		std::cout << std::setw(10) << std::right  << copy_nickname << std::endl;
		i++;
	}

	/*GERER a partir d'ici la demande d'index et les erreurs qui vont avec*/
	//une valeur par defaut ou si la personne n'envoie rien quoi faire ou un nombre trop grand ou trop petit ?
	std::string value;
	
	int index;
	//utiliser une string puis verifier ca taille, pour n'ir qu'un chiffre a convertir ensuite en int 
	while (1)
	{
		std::cout << "enter the index :\n";
		if (!std::getline(std::cin, value))
			return;
		if (value.size() == 1)
		{
			std::istringstream iss(value);
    		iss >> index;
			if (iss.fail())
       			std::cout << "Erreur de conversion." << std::endl;
			// index =  std::stoi(value);
			if (index >= 0 && index < count_contact)
			{
				std::cout << "first name :\n";
				std::cout << repertory[index].getfirst_name() << std::endl;
				std::cout << "last name :\n";
				std::cout << repertory[index].getlast_name() << std::endl;
				std::cout << "nick name :\n";
				std::cout << repertory[index].getnick_name() << std::endl;
				std::cout << "phone number :\n";
				std::cout << repertory[index].getphone_number() << std::endl;
				std::cout << "darkest secret:\n";
				std::cout << repertory[index].getdarkest_secret() << std::endl;
				break ;
			}
			else
				std::cout << "Bad number, no contact for this index, or not a correct number\n";
		}
		else
			std::cout << "Bad argument, no contact for this index, or not a correct number\n";

	}

			
	//demander l'index choisis
	//inde doit etre inferieur ou egale a count_contact
	//imprimer repertory[index]
}

Phonebook::~Phonebook()
{
}