/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:57:33 by trgaspar          #+#    #+#             */
/*   Updated: 2025/03/18 15:59:30 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
	std::cout << "\033[34mConstructor of the HumanB is called\033[0m" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "\033[31mDestructor of the HumanB is called\033[0m" << std::endl;
}

void HumanB::attack()
{
	if (_weapon != NULL)
		std::cout << _name << " attacks with a " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " attacks with the power of friendship" << std::endl;
}

void HumanB::setWeapon(Weapon &wp)
{
	_weapon = &wp;
}
