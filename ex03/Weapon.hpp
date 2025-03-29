/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 10:28:00 by trgaspar          #+#    #+#             */
/*   Updated: 2025/03/29 22:53:06 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
			std::string	_type;
	public:
			void		setType(std::string str);
			const std::string	&getType(void) const;
			Weapon(std::string name);
			~Weapon(void);
};

#endif