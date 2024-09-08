/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:51:10 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/08 11:01:04 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl test;
	if (ac ==2)
		test.complain(av[1]);
	else
		std::cout<<"Invalid arguments number." << std::endl;
	return 0;
}
