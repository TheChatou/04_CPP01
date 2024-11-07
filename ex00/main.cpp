/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:35:21 by fcoullou          #+#    #+#             */
/*   Updated: 2024/11/04 14:40:15 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main()
{
	std::string input;

	std::cout << "* * * * * * * * * * * * * * * * * * * * * * * *" << std::endl;
	std::cout << "* *                 F.A.Q.                  * *" << std::endl;
	std::cout << "* * * * * * * * * * * * * * * * * * * * * * * *" << std::endl;
	std::cout << "* NEW (creates a Heapy Zombie)                *" << std::endl
		<< "* RANDOM (creates a Stacky Zombie)            *" << std::endl
		<< "* EXIT (close the Zombie program)             *" << std::endl;
	std::cout << "* * * * * * * * * * * * * * * * * * * * * * * *" << std::endl;
		
	while (!std::cin.eof())
	{
		std::cout << " > Enter your command: " << std::endl;
		getline(std::cin, input);

		if (input == "NEW")
		{
			Zombie *Zzz;
			std::string name;
			std::cout << " > Enter a name for your Heapy Zombie: " << std::endl;
			getline(std::cin, name);
			Zzz = newZombie(name);
			Zzz->announce();
			delete(Zzz);
		}
		else if (input == "RANDOM")
		{
			std::string name;
			std::cout << " > Enter a name for your Stacky Zombie: " << std::endl;
			getline(std::cin, name);
			randomChump(name);
		}
		else if (input == "EXIT")
		{
			std::cout << "All Zombies are dead. You can valgrind them if you don't beleive me !" << std::endl;
			break;
		}
		else
		{
			std::cout << "* * * * * * * * * * * * * * * * * * * * * * * *" << std::endl;
			std::cout << "* Wrong input, please enter a valid command : *" << std::endl;
			std::cout << "* * * * * * * * * * * * * * * * * * * * * * * *" << std::endl;
			std::cout << "* NEW (creates a Heapy Zombie)                *" << std::endl
				<< "* RANDOM (creates a Stacky Zombie)            *" << std::endl
				<< "* EXIT (close the Zombie program)             *" << std::endl;
			std::cout << "* * * * * * * * * * * * * * * * * * * * * * * *" << std::endl;
		}
	}
	return 0;
}