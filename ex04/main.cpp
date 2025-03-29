/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:43:10 by trgaspar          #+#    #+#             */
/*   Updated: 2025/03/29 22:37:13 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong argument" << std::endl;
		return (1);
	}
	std::string 	arg1(argv[2]);
	std::string 	arg2(argv[3]);
	if (arg1 == arg2)
	{
		std::cout << "Error: This program is useless. s1 is same as s2" << std::endl;
		return (1);
	}
	Sed	sed(argv[1], argv[2], argv[3]);
	sed.start();
	return (0);
}
