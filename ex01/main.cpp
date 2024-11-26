/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:55:35 by fcoullou          #+#    #+#             */
/*   Updated: 2024/11/26 11:50:17 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>
#include <stdexcept>

Zombie	*zombieHorde(int N, std::string name);

// IT'S RAINING MAINS //////////////////////////////////////////////////////////

//	MAIN : with user input /////////////////////////////////////////////////////
//	TRY & CATCH & THROW : nouvelle méthode pour gérer les erreurs.
// Try permet de tester une instruction susceptible de générer une exception.
// Catch permet de gérer l'exception si elle est levée.
// Throw permet de lever une exception.
int	main()
{
	std::string input;

	std::cout << "* * * * * * * * * * * * * * * * * * * * * * * *" << std::endl;
	std::cout << "* *                  F.A.Q.                 * *" << std::endl;
	std::cout << "* * * * * * * * * * * * * * * * * * * * * * * *" << std::endl;
	std::cout << "*    HORDE (creates a Zombie Horde)           *" << std::endl
			<< "*    EXIT (close the Zombie Horde program)    *" << std::endl;
	std::cout << "* * * * * * * * * * * * * * * * * * * * * * * *" << std::endl;
		
	while (true)
	{
		std::cout << std::endl << " > Enter your command: " << std::endl;
		if (!getline(std::cin, input))
		{
			break;
		}
		
		if (input == "HORDE" || input == "horde" || input == "Horde")
		{
			Zombie *Zzz;
			std::string name;
			std::string numStr;
			int	N;
			
			std::cout << " > Enter a name for your Heapy Zombie Horde: " << std::endl;
			if (!getline(std::cin, name))
			{
				break;
			}
			
			std::cout << " > How many Zombies do you want to create ?: " << std::endl;
			if (!getline(std::cin, numStr))
			{
				break;
			}
			
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
		
		else if (input == "EXIT" || input == "exit" || input == "Exit")
		{
			std::cout << "All Zombies are dead. You can valgrind them if you don't beleive me !" << std::endl;
			break;
		}

		else
		{
			std::cout << std::endl << "✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗" << std::endl;
			std::cout << "✗                 WRONG INPUT                 ✗" << std::endl;
			std::cout << "✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗" << std::endl;
			std::cout << "✗   HORDE (creates a Zombie Horde)            ✗" << std::endl
					<< "✗   EXIT (close the Zombie Horde program)     ✗" << std::endl;
			std::cout << "✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗ ✗" << std::endl;
		}
	}
	
	if (std::cin.eof() || std::cin.fail() || std::cin.bad())
	{
		std::cerr << "** A wild error occurred, goodbye. **" << std::endl;
	}
	
	return 0;
}

//	MAIN : with raw tests ///////////////////////////////////////////////////
// int main() {
// 	std::string input;
// 	std::string name1 = "IAmAZombie";
// 	std::string numStr1 = "5";
// 	int N;

// 	//	Test avec un nombre de zombies correct
// 	N = std::atoi(numStr1.c_str());
// 	try
// 	{
// 		Zombie *Zzz = zombieHorde(N, name1);
// 		for (int i = 0; i < N; i++)
// 			Zzz[i].announce();
// 		delete[] Zzz;
// 	}
	
// 	catch (const std::exception &e)
// 	{
// 		std::cerr << e.what() << std::endl << std::endl;
// 	}

// 	//	Test avec un nombre de zombies négatif
// 	std::string numStr2 = "0";
// 	N = std::atoi(numStr2.c_str());
// 	try
// 	{
// 		Zombie *Zzz = zombieHorde(N, name1);
// 		for (int i = 0; i < N; i++)
// 			Zzz[i].announce();
// 		delete[] Zzz;
// 	}
	
// 	catch (const std::exception &e)
// 	{
// 		std::cerr << e.what() << std::endl << std::endl;
// 	}

// 	//	Test avec un nombre de zombies trop grand
// 	std::string numStr3 = "100000";
// 	N = std::atoi(numStr3.c_str());
// 	try
// 	{
// 		Zombie *Zzz = zombieHorde(N, name1);
// 		for (int i = 0; i < N; i++)
// 			Zzz[i].announce();
// 		delete[] Zzz;
// 	}
	
// 	catch (const std::exception &e)
// 	{
// 		std::cerr << e.what() << std::endl << std::endl;
// 	}

// 	//	Test avec un nom vide
// 	std::string name2 = "";
// 	N = std::atoi(numStr1.c_str());
// 	try
// 	{
// 		Zombie *Zzz = zombieHorde(N, name2);
// 		for (int i = 0; i < N; i++)
// 			Zzz[i].announce();
// 		delete[] Zzz;
// 	}
	
// 	catch (const std::exception &e)
// 	{
// 		std::cerr << e.what() << std::endl << std::endl;
// 	}

// 	return 0;
// }