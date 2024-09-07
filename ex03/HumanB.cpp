/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 19:42:57 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/07 15:58:20 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string data)
{
	name = data;
}
HumanB::~HumanB()
{
}


void HumanB::attack()
{
	std::cout<< name <<" attacks with their " << w->getType()<< std::endl;
}

void HumanB::setWeapon(Weapon &w_data)
{
	w = &w_data;
}
