/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 02:16:47 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/19 02:41:50 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_

#include <iostream>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon() {};
		Weapon( std::string type );
		~Weapon() {};
		const std::string&	getType() const;
		void				setType(std::string type);
};

#endif
