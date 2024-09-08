/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:50:45 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/08 12:08:18 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my burger." << std::endl;
}
void Harl::info( void )
{
	std::cout << "[ info ]\nI cannot believe adding extra bacon costs more money." << std::endl;

}
void Harl::warning( void )
{
	std::cout << "[ warning ]\nI think I deserve some free bacon after the poor service." << std::endl;

}
void Harl::error( void )
{
	std::cout << "[ error ]\nThis is unacceptable! I want to speak to the manager!" << std::endl;

}

void Harl::complain( std::string level )
{
	int	level_number = 9;
	void (Harl::*ptr_to_function[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string str[] = {"debug", "info", "warning", "error"};

	for (int i = 0; i < 4;i++)
	{
		if (level == str[i])
		{
			level_number = i;
			break ;
		}
	}

	switch (level_number)
	{
		case 0:
			for (int i = level_number ; i < 4; i++)
			{
				(this->*ptr_to_function[i])();
				std::cout << std::endl;
			}
			break ;
		case 1:
			for (int i = level_number ; i < 4; i++)
			{
				(this->*ptr_to_function[i])();
				std::cout << std::endl;
			}
			break ;
		case 2:
			for (int i = level_number ; i < 4; i++)
			{
				(this->*ptr_to_function[i])();
				std::cout << std::endl;
			}
			break ;
		case 3:
			for (int i = level_number ; i < 4; i++)
			{
				(this->*ptr_to_function[i])();
				std::cout << std::endl;
			}
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}


}
