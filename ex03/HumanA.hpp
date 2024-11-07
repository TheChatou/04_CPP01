/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:04:18 by fcoullou          #+#    #+#             */
/*   Updated: 2024/11/04 18:29:43 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack();
		
	private:
		std::string	_name;
		Weapon		&_weapon;
};

#endif