/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:45:40 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/08 12:36:36 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "Unknown";
}

Zombie::Zombie(std::string data )
{
	name = data;
}

Zombie::~Zombie()
{
	std::cout<<name<< " was removed"<<std::endl;
}
void Zombie::announce(void)
{
	std::cout<< name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
