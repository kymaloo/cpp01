/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:43:10 by trgaspar          #+#    #+#             */
/*   Updated: 2025/03/12 16:51:45 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "Str address : " << &str << std::endl;
	std::cout << "stringPTR address : " << &stringPTR << std::endl;
	std::cout << "stringREF address : " << &stringREF << std::endl;
	
	std::cout << "Str : " << str << std::endl;
	std::cout << "stringPTR : " << stringPTR << std::endl;
	std::cout << "stringREF : " << stringREF << std::endl;
	return (0);
}
