/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:42:30 by zakariyaham       #+#    #+#             */
/*   Updated: 2023/07/21 17:28:44 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

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

int main(int argc, char **argv)
{
	if (argc != 4 )
	{
		std::cout << "you didn't put the right number of parameter\n";
		return 1;
	}
	std::string line;
	std::ofstream file("new_file.replace");
	std::ifstream original(argv[1]);
	size_t position = 0;
	int	len_s1 = 0;

	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (!s1.empty())
		len_s1 = s1.length();

	if (original.is_open())
	{
		while (std::getline(original, line))
		{
			while (1)
			{
				position = line.find(s1, position);
				if (position != std::string::npos)
				{
					line.erase(position, len_s1);
					line.insert(position, s2);
					position = position + s2.length();
				}
				else
				{
					file << line << std::endl;
					break ;
				}
			}
		}
		original.close();
	}
	else
		std::cout << "Error during the openning of the file" << std::endl;
	return 0;
}
