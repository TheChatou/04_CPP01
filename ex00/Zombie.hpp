/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:36:36 by fcoullou          #+#    #+#             */
/*   Updated: 2024/11/04 14:13:24 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include "Zombie.hpp"
#include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		
		void 	announce(void) const;
			
	private:
		std::string	_name;
		
};

#endif