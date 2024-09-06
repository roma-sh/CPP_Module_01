/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:45:35 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/06 18:35:08 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *z = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		z[i].set_name(name);
	}
	return z;
}

int main(void)
{
	int zombie_number = 5;
	Zombie *z = zombieHorde(zombie_number, "cold_death");
	for (int i = 0; i < zombie_number; i++)
	{
		std::cout<<"zombie No."<< i+1 << " ";
		z[i].announce();
	}
	delete[] z;
	return 0;
}
