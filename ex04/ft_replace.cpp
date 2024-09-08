/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:48:43 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/08 15:42:37 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

/*
File stream objects like std::ofstream are non-copyable in C++.
You can't make a copy of an std::ofstream object.
								|
								V
*/

void	replace_it(std::ofstream &output, std::string s1, std::string s2,
	std::string line_read)
{
	size_t	found;
	size_t	s2_len;

	s2_len = s1.length();
	found = line_read.find(s1);
	if (found == std::string::npos)
		output << line_read << std::endl;
	else
	{
		output <<line_read.substr(0, found);
		output << s2;
		replace_it(output, s1, s2, line_read.substr(found + s2_len));
	}
}

void	ft_replace(char **argv)
{
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string read_line;
	std::string in_name = argv[1];

	std::ifstream inFile;
	std::ofstream outFile;

	inFile.open(in_name);
	outFile.open(in_name  + ".replace");
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
	if (s1.empty() || s2.empty())
	{
		while (!inFile.eof())
		{
			getline(inFile, read_line);
			outFile << read_line << std::endl;
		}
	}
	else
	{
		while (!inFile.eof())
		{
			getline(inFile, read_line);
				replace_it(outFile, s1, s2, read_line);
		}
	}
	inFile.close();
	outFile.close();
}
