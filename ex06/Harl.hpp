/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 04:50:59 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/19 05:35:23 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HARL_HPP__
# define __HARL_HPP__

# include <iostream>
# include <map>

# define DEBUG		"I must express my utmost discontent with the dreaded activity known as debugging. This loathsome endeavor has brought nothing but misery and anguish into my life. I implore you to hear my plaintive words, as I believe it is high time my grievances are acknowledged."
# define INFO		"First and foremost, debugging is an undeniable assault on my delicate sensibilities. The mere thought of plunging my thoughts into the code and wrestling with stubborn bugs sends shivers down my spine."
# define WARNING	"The time and energy wasted on this abhorrent pastime could be better spent on pursuits that bring genuine joy and fulfillment."
# define ERROR		"Grant me respite, and I shall forever remain grateful."

class Harl
{
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
	public:
		void	complain( std::string level );
};

#endif