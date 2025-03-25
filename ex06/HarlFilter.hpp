/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:51:35 by trgaspar          #+#    #+#             */
/*   Updated: 2025/03/25 17:27:19 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARLFILTER_HPP
# define HARLFILTER_HPP

# include <iostream>
# include <fstream>

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void (Harl::*ptrFunc[4])(void);
	public:
		Harl();
		~Harl();
		int complain(std::string level);
		void sw(int index);
};

#endif