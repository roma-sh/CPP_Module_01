/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:48:58 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/07 16:52:48 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "Invalid arguments number" << std::endl;
		return (1);
	}
	ft_replace(av);
}
