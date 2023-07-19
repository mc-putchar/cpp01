/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 05:03:03 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/19 05:19:42 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << DEBUG << std::endl;
}

void	Harl::info( void )
{
	std::cout << INFO << std::endl;
}

void	Harl::warning( void )
{
	std::cout << WARNING << std::endl;
}

void	Harl::error( void )
{
	std::cout << ERROR << std::endl;
}

void	Harl::complain( std::string level )
{
	std::map<std::string, void (Harl::*)()> level_map;
	level_map["DEBUG"] = &Harl::debug;
	level_map["INFO"] = &Harl::info;
	level_map["WARNING"] = &Harl::warning;
	level_map["ERROR"] = &Harl::error;
	
	(this->*level_map[level])();
}
