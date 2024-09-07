/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 19:43:05 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/07 15:58:25 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon *w;
		std::string name;
	public:
		HumanB(std::string data);
		~HumanB();
		void attack();
		void setWeapon(Weapon &w_data);
};

#endif
