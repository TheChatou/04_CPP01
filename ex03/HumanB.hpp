/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:05:10 by fcoullou          #+#    #+#             */
/*   Updated: 2024/11/04 18:26:07 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon weapon);
		
	private:
		std::string	_name;
		Weapon*		_weapon;
};

#endif