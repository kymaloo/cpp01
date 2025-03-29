/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:51:10 by trgaspar          #+#    #+#             */
/*   Updated: 2025/03/29 23:01:47 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

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
	std::cout << "\033[32mDebug2\033[0m" << std::endl;
}

void Harl::info(void)
{
	std::cout << "\033[32mInfo\033[0m" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "\033[32mWarning\033[0m" << std::endl;
	std::cout << "\033[32mWarning2\033[0m" << std::endl;
}

void Harl::error(void)
{
	std::cout << "\033[32mError\033[0m" << std::endl;
	std::cout << "\033[32mError2\033[0m" << std::endl;
}

int Harl::complain(std::string level)
{
	std::string str[4] = {"Debug", "Info", "Warning", "Error"};

	for (int i = 0; i <= 4; i++)
	{
		if (str[i] == level)
		{
			sw(i);
			return (i);
		}
	}
	sw(4);
	return (1);
}

void Harl::sw(int index)
{
	switch (index)
	{
		case 0:
		{
			std::cout << "[ Debug ]" << std::endl;
			(this->*ptrFunc[0])();
			std::cout << std::endl;
		}
		case 1:
		{
			std::cout << "[ Info ]" << std::endl;
			(this->*ptrFunc[1])();
			std::cout << std::endl;
		}
		case 2:
		{
			std::cout << "[ Warning ]" << std::endl;
			(this->*ptrFunc[2])();
			std::cout << std::endl;
		}
		case 3:
		{
			std::cout << "[ Error ]" << std::endl;
			(this->*ptrFunc[3])();
			std::cout << std::endl;
			break;
		}
		default:
		{
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		}
	}
}

