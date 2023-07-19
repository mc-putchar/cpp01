/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 02:45:02 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/19 04:48:53 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

static void	multiline_replacer(std::ifstream &file, std::ofstream &outfile, \
	std::string &str1, std::string &str2)
{
	char	c;

	while (file.get(c))
	{
		if (c == str1[0])
		{
			size_t i = 0;
			while (i < str1.length() && c == str1[i])
			{
				file.get(c);
				i++;
			}
			if (i == str1.length())
			{
				outfile << str2 << c;
				continue ;
			}
			else
				for (size_t j = 0; j < i; j++)
					outfile << str1[j];
		}
		outfile << c;
	}
}

int		main( int ac, char **av )
{
	if (ac != 4)
		return (1);
	const char		*filename = av[1];
	std::string		str1(av[2]);
	std::string		str2(av[3]);

	std::ifstream	file ( filename );
	std::ofstream	outfile ( (std::string(filename).append(".replace")).c_str(), \
					std::ios::trunc );
	std::string		line;

	if (!file.is_open())
	{
		std::cout << "Error opening file" << std::endl;
		return (1);
	}
	if (str1.find('\n') != std::string::npos)
		return (multiline_replacer(file, outfile, str1, str2), 0);
	while (std::getline(file, line))
	{
		size_t i = 0;
		while ((i = line.find(str1)) && i != std::string::npos)
		{
			line.erase(i, str1.length());
			line.insert(i, str2);
		}
		outfile << line << std::endl;
	}
	return (0);
}