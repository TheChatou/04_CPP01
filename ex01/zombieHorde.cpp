/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:46:56 by fcoullou          #+#    #+#             */
/*   Updated: 2024/11/04 16:14:16 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdexcept>

Zombie	*zombieHorde(int N, std::string name)
{
	if (N <= 0)
		throw std::invalid_argument("You must create at least one Zombie");
		
	Zombie*	Zzz = NULL;
	try
	{
		Zzz = new Zombie[N];
	}		
	catch (const std::bad_alloc& e)
	{
		throw std::runtime_error("Memory allocation failed for zombie horde");
	}
			
	for (int i = 0; i < N; i++)
	{
		Zzz[i] = Zombie(name);
	}
	return (Zzz);
}