/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:45:40 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/06 18:35:30 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout<<name<< " was removed"<<std::endl;
}
void Zombie::announce(void)
{
	std::cout<< name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::set_name(std::string data)
{
	name = data;
}
