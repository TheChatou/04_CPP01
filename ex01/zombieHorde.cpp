/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:46:56 by fcoullou          #+#    #+#             */
/*   Updated: 2024/11/26 11:29:39 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdexcept>

//	
Zombie	*zombieHorde(int N, std::string name)
{
	if (N <= 0)
		throw std::invalid_argument("You must create at least one Zombie");
	if (N > 10000)
		throw std::invalid_argument("Don't push it too far, you can't create more than 10000 Zombies");

	if (name.empty())
		name = "NoName";
		
	Zombie*	Zzz = new Zombie[N];
	if (!Zzz)
		throw std::bad_alloc();
			
	for (int i = 0; i < N; i++)
	{
		Zzz[i].setName(name);
	}
	return (Zzz);
}