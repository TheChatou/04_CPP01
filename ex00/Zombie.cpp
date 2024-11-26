/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:36:42 by fcoullou          #+#    #+#             */
/*   Updated: 2024/11/26 09:57:31 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// PUBLIC	////////////////////////////////////////////////////////////////////
Zombie::Zombie(std::string name)
{
	if (name.empty())
	{
		name = "NoName";
	}
	_name = name;
}
Zombie::~Zombie()
{
	std::cout << "> " << _name << " has been deleted from this world ! <" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

