/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 10:36:21 by trgaspar          #+#    #+#             */
/*   Updated: 2025/03/18 15:58:33 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

Weapon::Weapon(std::string name)
{
	std::cout << "\033[34mConstructor of Weapon is called\033[0m\n";
	_type = name;
}

Weapon::~Weapon()
{
	std::cout << "\033[31mDestructor of Weapon is called\033[0m\n";
}

void	Weapon::setType(std::string str)
{
	_type = str;
}

std::string Weapon::getType()
{
	return (_type);
}
