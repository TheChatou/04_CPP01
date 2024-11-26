/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:04:26 by fcoullou          #+#    #+#             */
/*   Updated: 2024/11/26 13:14:31 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// PUBLIC	////////////////////////////////////////////////////////////////////
HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {}

HumanA::~HumanA()
{
	std::cout << _name << " has been deleted from this world !" << std::endl;
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with " << _weapon.getType() << std::endl;
}
