/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:09:22 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/19 00:46:42 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name)
{
	Zombie* horde = new Zombie[N];
	
	for (int i = 0; i < N; ++i)
		horde[i].setName(name);
	return (horde);
}
