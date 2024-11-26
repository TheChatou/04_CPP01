/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:35:21 by fcoullou          #+#    #+#             */
/*   Updated: 2024/11/26 09:58:04 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

// IT'S RAINING MAINS //////////////////////////////////////////////////////////

// main with user input ////////////////////////////////////////////////////////
int	main()
{
	std::cout << "* * * * * * * * * * * * * * * * * * * * * * * *" << std::endl;
	std::cout << "* *                 F.A.Q.                  * *" << std::endl;
	std::cout << "* * * * * * * * * * * * * * * * * * * * * * * *" << std::endl;
	std::cout << "* *  NEW (creates a Heapy Zombie)             *" << std::endl
		<< "* *  RANDOM (creates a Stacky Zombie)         *" << std::endl
		<< "* *  EXIT (close the Zombie program)          *" << std::endl;
	std::cout << "* * * * * * * * * * * * * * * * * * * * * * * *" << std::endl;

	std::string input;		
	while (true)
	{
		std::cout << " > Enter your command: " << std::endl;
		if (!getline(std::cin, input))
		{
			break;
		}

		if (input == "NEW" || input == "new")
		{
			Zombie *Zzz;
			std::string name;
			std::cout << " > Enter a name for your Heapy Zombie: " << std::endl;
			if (!getline(std::cin, name))
			{
				break;
			}			
			Zzz = newZombie(name);
			Zzz->announce();
			delete(Zzz);
		}
		
		else if (input == "RANDOM" || input == "random")
		{
			std::string name;
			std::cout << " > Enter a name for your Stacky Zombie: " << std::endl;
			if (!getline(std::cin, name))
			{
				break;
			}
			randomChump(name);
		}

		else if (input == "EXIT" || input == "exit")
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
	if (std::cin.eof() || std::cin.fail() || std::cin.bad())
	{
		std::cerr << "** A wild error occurred, goodbye. **" << std::endl;
	}
	
	return 0;
}

// main with raw tests //////////////////////////////////////////////////////
// int	main()
// {
// 	Zombie *Zzz;
// 	Zzz = newZombie("Heapy");
// 	Zzz->announce();
// 	delete(Zzz);
// 	randomChump("Stacky");
// 	randomChump("");
// 	return 0;
// }
