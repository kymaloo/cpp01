#ifndef ZOMBI_HPP
# define ZOMBI_HPP

# include <iostream>
# include <new>

class Zombie
{
	private:
			std::string	_name;
	public:
			void		announce(void);
			void		setName(std::string str);
			std::string	getName(void);
			Zombie(void);
			~Zombie(void);
};

Zombie		*zombieHorde(int N, std::string name );
#endif