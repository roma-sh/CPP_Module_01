/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:50:28 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/08 10:38:28 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl test;

	test.complain("debug");
	test.complain("info");
	test.complain("warning");
	test.complain("error");
	test.complain("info");
	test.complain("hahah");

	return 0;
}
