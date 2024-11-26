/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:04:35 by fcoullou          #+#    #+#             */
/*   Updated: 2024/11/26 13:20:24 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// PUBLIC	////////////////////////////////////////////////////////////////////
HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

HumanB::~HumanB()
{
	std::cout << _name << " has been deleted from this world !" << std::endl;
}

void	HumanB::attack()
{
	if (_weapon)
	{
		std::cout << _name << " attacks with " << _weapon->getType() << std::endl;
	}
	else
	{
		std::cout << _name << " attacks with his bare hands" << std::endl;
	}
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}