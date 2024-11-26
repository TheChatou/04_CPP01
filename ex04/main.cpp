/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:40:50 by fcoullou          #+#    #+#             */
/*   Updated: 2024/11/26 16:45:07 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

//	STD::STRING : Fonctions Membres utilisees :
//	std::string.c_str() : retourne un pointeur sur le premier caractere d'une char*.
//	std::string.empty() : retourne true si la chaîne de caractères est vide, false sinon.
//	std::string.find() : retourne la position de la première occurrence de la chaîne de caractères recherchée.
//	std::string.append() : ajoute une chaîne de caractères à la fin de la chaîne de caractères actuelle.
//	std::string.length() : retourne la longueur de la chaîne de caractères.
//	std::string::npos : valeur spéciale qui signifie que la chaîne de caractères n'a pas été trouvée.
int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Wrong number of arguments !" << std::endl;
		return 1;
	}
	
	std::string		filename = av[1];
	std::ifstream	fd(filename.c_str());
	if (!fd)
	{
		std::cerr << "Can't open the file : " << filename << std::endl;
		return 1;
	}
	
	std::string		newFilename = filename + ".replace";
	std::ofstream	newFd(newFilename.c_str());
	if (!newFd)
	{
		std::cerr << "Can't create the dest file : " << newFilename << std::endl;
		return 1;
	}

	std::string	oldStr = av[2];
	std::string	newStr = av[3];

	if (oldStr.empty())
	{
		std::cerr << "The string to replace cannot be empty!" << std::endl;
		return 1;
	}

//	On lit le fichier ligne par ligne, et on remplace les occurences de oldStr par newStr.
// On écrit dans newLine les caractères avant oldStr si il est trouve. On ajoute ensuite newStr à newLine.
// Si oldStr n'est pas trouvé, on ajoute les caractères restants de la ligne à newLine.
// On écrit ensuite newLine dans le fichier de destination.
	std::string line;
	while (std::getline(fd, line))
	{
		std::string newLine;
		size_t pos = 0;
		size_t found;
		while ((found = line.find(oldStr, pos)) != std::string::npos)
		{
			newLine.append(line, pos, found - pos);
			newLine.append(newStr);
			pos = found + oldStr.length();
		}
		newLine.append(line, pos, line.length() - pos);
		newFd << newLine << std::endl;
	}

	fd.close();
	newFd.close();

	std::cout << "** Exercice done, you can check the new file if you don't believe me. **" << std::endl;
	return 0;	
}
