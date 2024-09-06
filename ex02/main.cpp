/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:33:56 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/06 19:39:49 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout<< "str address is: " << &str << std::endl;
	std::cout<< "stringPTR address is: " << &stringPTR<< std::endl;
	std::cout<< "stringREF address is: " << &stringREF<< std::endl << std::endl;

	std::cout<< "The value of str is: " << str << std::endl;
	std::cout<< "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout<< "The value pointed to by stringREF: " << stringREF << std::endl;
	return 0;
}
