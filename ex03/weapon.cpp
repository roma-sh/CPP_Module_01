/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 19:43:34 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/06 20:31:11 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}
Weapon::Weapon(std::string data)
{
	type = data;
}
Weapon::~Weapon()
{

}

const std::string& Weapon::getType()
{
	std::string &re_str = type;
	return re_str;
}
void Weapon::setType(std::string data)
{
	type = data;
}
