/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:51:10 by trgaspar          #+#    #+#             */
/*   Updated: 2025/03/25 17:16:45 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "\033[34mConstructor of the Harl\033[0m" << std::endl;
	ptrFunc[0] = &Harl::debug;
	ptrFunc[1] = &Harl::info;
	ptrFunc[2] = &Harl::warning;
	ptrFunc[3] = &Harl::error;
}

Harl::~Harl(void)
{
	std::cout << "\033[31mDestructor of the Harl is called\033[0m" << std::endl;
}

void Harl::debug(void)
{
	std::cout << "\033[32mDebug\033[0m" << std::endl;
}

void Harl::info(void)
{
	std::cout << "\033[32mInfo\033[0m" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "\033[32mWarning\033[0m" << std::endl;
}

void Harl::error(void)
{
	std::cout << "\033[32mError\033[0m" << std::endl;
}

void Harl::complain(std::string level)
{
	std::string str[4] = {"Debug", "Info", "Warning", "Error"};

	for (int i = 0; i <= 4; i++)
	{
		if (str[i] == level)
		{
			(this->*ptrFunc[i])();
			return ;
		}
		if (i == 4)
			std::cout << level << " isn't valid" << std::endl;
	}
}
