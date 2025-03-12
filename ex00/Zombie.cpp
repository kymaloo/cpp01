/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:45:16 by trgaspar          #+#    #+#             */
/*   Updated: 2025/03/12 16:59:33 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << "The construtor " << _name << " is called\n\n";
}

Zombie::~Zombie(void)
{
	std::cout << "The destrutor " << _name << " is called\n\n";
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n\n";
}

void	Zombie::setName(std::string name)
{
	_name = name;
}
