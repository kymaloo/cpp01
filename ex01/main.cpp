/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:43:10 by trgaspar          #+#    #+#             */
/*   Updated: 2025/03/12 16:34:49 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zb = zombieHorde(3, "Jacques");
	Zombie *zb1 = zombieHorde(3, "Gilbert");
	delete[] zb;
	delete[] zb1;
	return (0);
}
