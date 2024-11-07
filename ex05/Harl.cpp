/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:24:07 by fcoullou          #+#    #+#             */
/*   Updated: 2024/11/07 11:15:38 by fcoullou         ###   ########.fr       */
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

void	Harl::complain(std::string level)
{
	std::string	const l_switch[NBLEVELS] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*func_ptr[NBLEVELS])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < NBLEVELS; i++)
	{
		if (level == l_switch[i])
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