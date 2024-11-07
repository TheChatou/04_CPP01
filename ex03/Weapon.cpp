/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:02:12 by fcoullou          #+#    #+#             */
/*   Updated: 2024/11/04 18:10:59 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// PUBLIC	////////////////////////////////////////////////////////////////////
Weapon::Weapon() : _type("") {}

Weapon::Weapon(std::string weaponType)
{
	_type = weaponType;
}

Weapon::~Weapon() {}

std::string	const &Weapon::getType() const
{
	std::string const &type = _type;
	return (type);
}

void	Weapon::setType(std::string newType)
{
	_type = newType;
}
