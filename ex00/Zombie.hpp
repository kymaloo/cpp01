#ifndef ZOMBI_HPP
# define ZOMBI_HPP

# include <iostream>
# include <new>

class Zombie
{
	private:
			std::string	_name;
	public:
			void		announce(void); // Print "name: BraiiiiiiinnnzzzZ..."
			Zombie(std::string name);
			~Zombie(void);
			void		setName(std::string str);
};
		
void		randomChump(std::string name);
Zombie		*newZombie(std::string name);
#endif