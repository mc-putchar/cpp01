/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 00:57:29 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/19 02:13:10 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void )
{
	std::string		stringVAR = "HI THIS IS BRAIN";
	std::string*	stringPTR = &stringVAR;
	std::string&	stringREF = stringVAR;

	std::cout << "strVAR: " << &stringVAR << std::endl;
	std::cout << "strPTR: " << stringPTR << std::endl;
	std::cout << "strREF: " << &stringREF << std::endl;
	std::cout << "strVAR: " << stringVAR << std::endl;
	std::cout << "strPTR: " << *stringPTR << std::endl;
	std::cout << "strREF: " << stringREF << std::endl;
	return (0);
}