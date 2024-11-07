/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:04:35 by fcoullou          #+#    #+#             */
/*   Updated: 2024/11/04 18:27:03 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// PUBLIC	////////////////////////////////////////////////////////////////////
HumanB::HumanB() : _name(""), _weapon(NULL) {}

HumanB::HumanB(std::string name) : _name(name) {}

HumanB::~HumanB() {}

void	HumanB::attack()
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon weapon)
{
	*_weapon = weapon;
}