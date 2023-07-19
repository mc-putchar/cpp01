/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 02:33:38 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/19 02:37:24 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : \
				_name(name), _weapon(weapon)
{
	return ;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " \
		<< this->_weapon.getType() << std::endl;
}
