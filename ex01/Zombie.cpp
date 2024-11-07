/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:36:42 by fcoullou          #+#    #+#             */
/*   Updated: 2024/11/04 16:18:00 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// PUBLIC	////////////////////////////////////////////////////////////////////
Zombie::Zombie() : _name("Zombie") {}

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie() {}

void	Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

