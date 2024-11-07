/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:02:02 by fcoullou          #+#    #+#             */
/*   Updated: 2024/11/04 18:10:29 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon
{
	public:
		Weapon();
		Weapon(std::string weaponType);
		~Weapon();
		std::string const&	getType() const;
		void	setType(std::string newType);
		
	private:
		std::string	_type;
};

#endif