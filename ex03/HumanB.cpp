/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 19:42:57 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/08 13:53:17 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string data) : w(NULL)
{
	name = data;
}
HumanB::~HumanB()
{
}


void HumanB::attack()
{
	if (!this->w)
		std::cout << name <<" doesn't have a weapon to attack" << std::endl;
	else
		std::cout<< name <<" attacks with their " << w->getType()<< std::endl;
}

void HumanB::setWeapon(Weapon &w_data)
{
	w = &w_data;
}
