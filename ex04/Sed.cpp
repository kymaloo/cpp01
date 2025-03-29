/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:51:10 by trgaspar          #+#    #+#             */
/*   Updated: 2025/03/29 22:52:05 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(char *filename, std::string s1, std::string s2)
{
	std::cout << "\033[34mConstructor of the Sed\033[0m" << std::endl;
	_filename = filename;
	_s1 = s1;
	_s2 = s2;
}

Sed::~Sed(void)
{
	std::cout << "\033[31mDestructor of the Sed is called\033[0m" << std::endl;
}

int	Sed::openFd(std::string str)
{
	_fd.open(str.c_str(), std::fstream::in);
	if (!_fd)
	{
        std::cerr << "Error: fd isn't open !" << std::endl;
        return (1);
    }
	return (0);
}

void Sed::start(void)
{
	std::string line;
	std::string	fdString = _filename + ".replace";
	std::fstream 	fd;

	openFd(_filename);
	fd.open(fdString.c_str(), std::fstream::out);
	if (!fd)
	{
        std::cerr << "Error: fd isn't open !" << std::endl;
		_fd.close();
        return ;
    }
	while (getline(_fd, line))
	{
		while (isLineValid(line) == false)
			replace(line);
		line += "\n";
		fd << line;
	}
	fd.close();
	_fd.close();
}
 
bool Sed::isLineValid(std::string &str)
{
	int	i;
	int	len;
	int	s1_lenght;

	i = 0;
	len = str.length();
	s1_lenght = _s1.size();
	while ((len - i) >= s1_lenght)
	{
		if (str.compare(i, s1_lenght, _s1) == 0)
		{
			_iLineNoValid = i;
			return (false);
		}
		i++;
	}
	return (true);
}

void Sed::replace(std::string &str)
{
    size_t i = str.find(_s1, _iLineNoValid);

    if (i != std::string::npos)
    {
        str.insert(i, _s2);
        str.erase(i + _s2.size(), _s1.size());
    }
}
