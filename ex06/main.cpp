/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:23:40 by fcoullou          #+#    #+#             */
/*   Updated: 2024/11/26 16:56:30 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "You need one argument. Try : DEBUG, INFO, WARNING or ERROR" << std::endl;
		return (1);
	}
	
	Harl	harl;

	harl.complain(av[1]);
	return (0);
}