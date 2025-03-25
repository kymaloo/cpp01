/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:51:10 by trgaspar          #+#    #+#             */
/*   Updated: 2025/03/25 17:43:13 by trgaspar         ###   ########.fr       */
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
	return (-1);
}

void Harl::sw(int index)
{
	switch (index)
	{
		case 0:
		{
			std::cout << "[ Debug ]" << std::endl;
			for (int i = index; i <= 3; i++)
			{
				(this->*ptrFunc[i])();
				std::cout << std::endl;
			}
			break;
		}
		case 1:
		{
			std::cout << "[ Info ]" << std::endl;
			for (int i = index; i <= 3; i++)
			{
				(this->*ptrFunc[i])();
				std::cout << std::endl;
			}
			break;
		}
		case 2:
		{
			std::cout << "[ Warning ]" << std::endl;
			for (int i = index; i <= 3; i++)
			{
				(this->*ptrFunc[i])();
				std::cout << std::endl;
			}
			break;
		}
		case 3:
		{
			std::cout << "[ Error ]" << std::endl;
			for (int i = index; i <= 3; i++)
			{
				(this->*ptrFunc[i])();
				std::cout << std::endl;
			}
			break;
		}
		default:
		{
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		}
	}
}

