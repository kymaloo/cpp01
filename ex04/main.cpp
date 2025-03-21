/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:43:10 by trgaspar          #+#    #+#             */
/*   Updated: 2025/03/21 17:17:24 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int argc, char **argv)
{
	std::string 	arg1(argv[2]);
	std::string 	arg2(argv[3]);
	if (argc != 4)
	{
		std::cout << "Wrong argument" << std::endl;
		return (1);
	}
	if (arg1 == arg2)
	{
		std::cout << "Error: This program is useless. s1 is same as s2" << std::endl;
		return (1);
	}
	Sed	sed(argv[1], argv[2], argv[3]);
	sed.start();
	return (0);
}
