/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafia <mafia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 01:56:26 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/18 01:52:52 by mafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

void call(ClapTrap& c)
{
	std::cout << ">>>>> " << std::endl;
	c.attack("target");
	std::cout << ">>>>> " << std::endl;
}


int main()
{
	
	
	ScavTrap c("cp");

	ScavTrap b(c);
}