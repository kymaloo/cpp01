/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 10:42:54 by trgaspar          #+#    #+#             */
/*   Updated: 2025/03/18 16:02:14 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	std::string tmp = weapon.getType();
	std::cout << "\033[34mConstructor of the HumanA is called with a " << tmp << "\033[34m" << std::endl;
	_name = name;
}

HumanA::~HumanA(void)
{
	std::cout << "\033[31mDestructor of the HumanA is called\033[0m" << std::endl;
}

void HumanA::attack()
{
	std::cout << _name << " attacks with a " << _weapon.getType() << std::endl;
}
