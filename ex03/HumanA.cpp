/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 19:42:36 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/06 20:33:49 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string data, Weapon &w_data) : w(w_data)
{
	name = data;
}
HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout<<name<<" attacks with their " << w.getType()<< std::endl;
}
