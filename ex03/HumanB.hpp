/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 02:23:57 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/19 02:32:56 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _HUMANB_HPP_
# define _HUMANB_HPP_

#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	_name;
		Weapon*		_weapon;
	public:
		HumanB( std::string name );
		~HumanB() {};
		void	attack();
		void	setWeapon( Weapon& weapon );
};

#endif
