/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:43:10 by trgaspar          #+#    #+#             */
/*   Updated: 2025/03/12 15:24:12 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie zombie1("Bernard");
	Zombie	*zombie2;

	zombie2 = newZombie("George");
	zombie1.announce();
	zombie2->announce();
	randomChump("Tristan");
	delete zombie2;
	return (0);
}
