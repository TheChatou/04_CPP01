/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:24:07 by fcoullou          #+#    #+#             */
/*   Updated: 2024/11/26 18:46:57 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#define	NBLEVELS	4

// PUBLIC	////////////////////////////////////////////////////////////////////
Harl::Harl() 
{
	std::cout << "** Hello Harl **" << std::endl;  
}

Harl::~Harl()
{
	std::cout << "** Goodbye Harl, and thanks for complaining** " << std::endl;
}

//	Meme chose qu'a l'exercice precedent, mais sans passer par un tableau de pointeurs de fonctions.
// On utilise un switch pour appeler la fonction membre correspondante.
//	SWITCH/CASE : permet de tester une variable et d'exécuter une série d'instructions en fonction de la valeur de cette variable.
// On teste la valeur de "complaint" (initialisee a -1) pour appeler la fonction membre correspondante.
// Si "complaint" n'est pas initialisee, on affiche un message par defaut.
//	CASE : agit de maniere similaire a un if/else if/else. Mais il est plus rapide et plus lisible.
// __attribute__ ((fallthrough)) : permet de forcer le passage au CASE suivant.
// il n'est pas necessaire de mettre des {} apres un CASE.
//	DEFAULT : permet de definir un cas par defaut si aucun des CASE ne correspond.
void	Harl::complain(std::string level)
{
	std::string	const l_switch[NBLEVELS] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	complaint = -1;

	for (int i = 0; i < NBLEVELS; i++)
	{
		if (level == l_switch[i])
		{
			complaint = i;
			break;
		}
	}
	
	switch (complaint)
	{
		case 0:
			Harl::debug();
			__attribute__ ((fallthrough));
		case 1:
			Harl::info();
			__attribute__ ((fallthrough));
		case 2:
			Harl::warning();
			__attribute__ ((fallthrough));
		case 3:
			Harl::error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

// PRIVATE	////////////////////////////////////////////////////////////////////
void Harl::debug( void )
{
	std::cout << "I like to complain, and debug !" << std::endl;
}
void Harl::info( void )
{
	std::cout << "You need some infos ? Good for you .." << std::endl;
}
void Harl::warning( void )
{
	std::cout << "! NERD ALERT !" << std::endl;
}
void Harl::error( void )
{
	std::cout << "Error, I think you should turn off you computer." << std::endl;
}