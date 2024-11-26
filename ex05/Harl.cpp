/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:24:07 by fcoullou          #+#    #+#             */
/*   Updated: 2024/11/26 18:38:18 by fcoullou         ###   ########.fr       */
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
//	Apres avoir declare une macro NBLEVELS, on cree un tableau de string contenant les differents niveaux de log.
// On cree ensuite un tableau de pointeurs de fonctions membres.
// Chaque pointeur de fonction pointe sur une fonction membre de Harl.
// En fonction du log passe en argument ("level"), on appelle la fonction membre correspondante.
void	Harl::complain(std::string level)
{
	std::string	const level_switch[NBLEVELS] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*func_ptr[NBLEVELS])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < NBLEVELS; i++)
	{
		if (level == level_switch[i])
		{
			(this->*func_ptr[i])();
		}
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