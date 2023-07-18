/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 02:17:50 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/19 00:46:26 by mcutura          ###   ########.fr       */
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
				Zombie( void );
				Zombie( std::string name );
				~Zombie( void );
		void	setName( std::string name );
	private:
		std::string	name;
};

Zombie*	zombieHorde( int N, std::string name);

#endif
