/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:40:50 by fcoullou          #+#    #+#             */
/*   Updated: 2024/11/05 16:16:09 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Wrong number of arguments !" << std::endl;
		return 1;
	}
	
	std::string		filename = av[1];
	std::ifstream	fd(filename.c_str());
	if (!fd)
	{
		std::cerr << "Can't open the file : " << filename << std::endl;
		return 1;
	}
	
	std::string		newFilename = filename + ".replace";
	std::ofstream	newFd(newFilename.c_str());
	if (!newFd)
	{
		std::cerr << "Can't create the dest file : " << newFilename << std::endl;
		return 1;
	}

	const char	*oldStr = av[2];
	std::string	newStr = av[3];
	char		c;
	while (fd.get(c))
	{
		if (c == oldStr[0])
		{
			std::string	matchStr(1, c);
			size_t i = 1;
			while (i < std::strlen(oldStr) && fd.get(c))
			{
				matchStr += c;
				if (c != oldStr[i])
					break;
				i++;
			}
			if (i == std::strlen(oldStr))
			{
				newFd << newStr;
			}
			else
			{
				newFd << matchStr;
			}
		}
		else
		{
			newFd << c;
		}
	}
	
	fd.close();
	newFd.close();

	std::cout << "** Exercice done, you can check the new file if you don't believe me. **" << std::endl;
	return 0;	
}
