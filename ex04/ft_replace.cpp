/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:48:43 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/07 17:25:22 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void	ft_replace(char **argv)
{
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string read_line;

	std::ifstream inFile;
	std::ofstream outFile;

	inFile.open(argv[1]);
	outFile.open("outfile.text");
	if (inFile.fail())
	{
		std::cout << "Can't open " << argv[1] << std::endl;
		return ;
	}
	if (outFile.fail())
	{
		std::cout << "Can't create outfile.text" << std::endl;
		return ;
	}
	while (!inFile.eof())
	{
		getline(inFile, read_line);
		if (s1.empty() || s2.empty())
			outFile << read_line << std::endl;
		else
		{
		if (read_line == s1)
			outFile << s2 << std::endl;
		else
			outFile << read_line << std::endl;
		}
	}
	inFile.close();
	outFile.close();
}
