/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:42:30 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/25 14:28:15 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
Les classes std::fstream, std::ifstream et std::ofstream sont toutes des classes de la bibliothèque <fstream> en C++ et sont utilisées pour travailler avec des fichiers. Voici les principales différences entre ces classes :

std::fstream :

std::fstream est une classe polyvalente qui permet d'ouvrir un fichier en mode lecture, écriture ou les deux.
Elle est utilisée lorsque vous devez effectuer à la fois des opérations de lecture et d'écriture sur un fichier.
Vous pouvez utiliser les opérations de lecture (>>), d'écriture (<<) et d'autres fonctions membres pour travailler avec le fichier.
std::ifstream :

std::ifstream est utilisée pour lire le contenu d'un fichier.
Elle est utilisée lorsque vous n'avez besoin que d'opérations de lecture sur un fichier et que vous ne prévoyez pas d'écrire dedans.
Vous pouvez utiliser les opérations de lecture (>>) et les fonctions membres associées pour lire le contenu du fichier.
std::ofstream :

std::ofstream est utilisée pour écrire dans un fichier.
Elle est utilisée lorsque vous n'avez besoin que d'opérations d'écriture sur un fichier et que vous ne prévoyez pas de le lire.
Vous pouvez utiliser les opérations d'écriture (<<) et les fonctions membres associées pour écrire dans le fichier.

En résumé, std::fstream est utilisée pour les opérations de lecture/écriture,
std::ifstream est utilisée pour les opérations de lecture uniquement,
et std::ofstream est utilisée pour les opérations d'écriture uniquement.
hoisissez la classe appropriée en fonction de vos besoins spécifiques
en matière de lecture ou d'écriture de fichiers.

*/

#include "Sed.hpp"

int main(int argc, char **argv)
{
	if (argc != 4 )
	{
		std::cout << "you didn't put the right number of parameter\n";
		return 1;
	}

	Sed sed(argv);
	
	return (sed.do_it(argv));
}

