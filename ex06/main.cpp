/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 05:14:04 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/19 05:56:24 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;

	if (ac != 2 || \
		(std::string(av[1]) != "DEBUG" && std::string(av[1]) != "INFO" && std::string(av[1]) != "WARNING" && std::string(av[1]) != "ERROR"))
	{
		std::cout << "Usage: ./harl [DEBUG|INFO|WARNING|ERROR]" << std::endl;
		return (1);
	}
	switch (*av[1])
	{
		case 'D':
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain("DEBUG");
			// fall through
		case 'I':
			std::cout << "[ INFO ]" << std::endl;
			harl.complain("INFO");
			// fall through
		case 'W':
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
			// fall through
		case 'E':
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
	}
	return (0);
}