/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:45:35 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/08 12:47:17 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *new_zombie = newZombie("shitty_blood");
	new_zombie->announce();
	delete new_zombie;
	randomChump("night_clown");
}


/*
#### Stack or Heap?? ####
*-Use heap allocation (newZombie) when you need the zombie to
	persist after the function call.
*-Use stack allocation (randomChump) when the zombie is only
	needed briefly within the function's scope.
*/
