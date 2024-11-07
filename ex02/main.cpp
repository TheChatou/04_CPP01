/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:23:45 by fcoullou          #+#    #+#             */
/*   Updated: 2024/11/04 16:43:23 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address of the string : \t" << &str << std::endl;
	std::cout << "Address of the stringPTR : \t" << stringPTR << std::endl;
	std::cout << "Address of the stringREF : \t" << &stringREF << std::endl;
	std::cout << "Value of the string : \t\t" << str << std::endl;
	std::cout << "Value of the stringPTR : \t" << *stringPTR << std::endl;
	std::cout << "Value of the stringREF : \t" << stringREF << std::endl;
	return (0);	
}