/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 08:38:57 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/19 00:44:17 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie( void ) {}

Zombie::Zombie( std::string name ) : name(name) {}

Zombie::~Zombie( void )
{
	std::cout << this->name << " destroyed" << std::endl;
}

void	Zombie::setName( std::string name )
{
	this->name = name;
}
