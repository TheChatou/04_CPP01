/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:55:35 by fcoullou          #+#    #+#             */
/*   Updated: 2024/11/04 16:11:20 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>
#include <stdexcept>

Zombie	*zombieHorde(int N, std::string name);

int	main()
{
	std::string input;

	std::cout << "* * * * * * * * * * * * * * * * * * * * * * * *" << std::endl;
	std::cout << "* *                 F.A.Q.                  * *" << std::endl;
	std::cout << "* * * * * * * * * * * * * * * * * * * * * * * *" << std::endl;
	std::cout << "* HORDE (creates a Zombie Horde)                *" << std::endl
		<< "* EXIT (close the Zombie program)             *" << std::endl;
	std::cout << "* * * * * * * * * * * * * * * * * * * * * * * *" << std::endl;
		
	while (!std::cin.eof())
	{
		std::cout << " > Enter your command: " << std::endl;
		getline(std::cin, input);

		if (input == "HORDE")
		{
			Zombie *Zzz;
			std::string name;
			std::string numStr;
			int	N;
			
			std::cout << " > Enter a name for your Heapy Zombie Horde: " << std::endl;
			getline(std::cin, name);
			std::cout << " > How many Zombies do you want to create ?: " << std::endl;
			getline(std::cin, numStr);
			N = std::atoi(numStr.c_str());
			
			try
			{
				Zzz = zombieHorde(N, name);
				for (int i = 0; i < N ; i++)
					Zzz[i].announce();
				delete[] Zzz;
			}
			catch (const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
				continue;
			}
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
			std::cout << "* HORDE (creates a Zombie Horde)                *" << std::endl
				<< "* EXIT (delete the Horde, close Zombie program) *" << std::endl;
			std::cout << "* * * * * * * * * * * * * * * * * * * * * * * *" << std::endl;
		}
	}
	return 0;
}