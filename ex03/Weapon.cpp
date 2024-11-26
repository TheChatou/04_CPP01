/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:02:12 by fcoullou          #+#    #+#             */
/*   Updated: 2024/11/26 13:07:36 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// PUBLIC	////////////////////////////////////////////////////////////////////
Weapon::Weapon() : _type("") {}

Weapon::Weapon(std::string weaponType) : _type(weaponType) {}

Weapon::~Weapon()
{
	std::cout << _type << " has been deleted from this world !" << std::endl;
}

std::string	const &Weapon::getType() const
{
	std::string const &type = _type;
	return (type);
}

void	Weapon::setType(std::string newType)
{
	_type = newType;
}
