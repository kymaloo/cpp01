/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:51:35 by trgaspar          #+#    #+#             */
/*   Updated: 2025/03/21 16:58:34 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>

class Sed
{
	private:
		std::string 	_filename;
		std::string 	_s1;
		std::string 	_s2;
		std::fstream 	_fd;
		int				_iLineNoValid;
	public:
		Sed(char *filename, std::string s1, std::string s2);
		~Sed();
		void 	start(void);
		int		openFd(std::string str);
		bool	isLineValid(std::string &str);
		void	replace(std::string &str);
};

#endif