/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 02:17:50 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/18 18:57:56 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

#include <iostream>

class Zombie
{
	public:
		void	announce( void );
		Zombie( std::string name );
		~Zombie( void );
	private:
		std::string	name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
