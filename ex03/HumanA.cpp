/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 19:42:36 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/08 13:31:13 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*
w is a reference (Weapon &w), and references must be initialized when they are
declared, not assigned later. In C++, references cannot be reassigned after
initialization, and they must be initialized using the initializer list.
													|
													v
*/

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
