/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 00:47:20 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/19 00:55:09 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define HORDE_SIZE	5

int		main( void )
{
	Zombie* horde = zombieHorde(HORDE_SIZE, "Hordor");
	
	std::cout << "The Horde is here: " << HORDE_SIZE << " zombies appeared\n";
	for (int i = 0; i < HORDE_SIZE; ++i)
	{
		std::cout << "[" << i + 1 << "] ";
		horde[i].announce();
	}
	delete [] horde;
	std::cout << "Horde vanquished!\n" << "VICTORY!!!" << std::endl;
	return (0);
}
