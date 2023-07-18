/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:19:41 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/18 19:00:03 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main( void )
{
	Zombie*	hzombie;

	randomChump("Stacky");
	hzombie = newZombie("Heappie");
	hzombie->announce();
	randomChump("Brainy");
	delete hzombie;
	return (0);
}
