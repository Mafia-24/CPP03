/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 03:16:35 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/16 22:03:29 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	this->_name = "Standard ScavTrap";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap default constructor has been called!" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "ScavTrap's parametrized constructor has been called!" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& ref) : ClapTrap(ref)
{
	std::cout << "ScavTrap's copy constructor has been called!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap's destructor has been called!" << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& rhs )
{
	if (this == &rhs)
	{
		return (*this);
	}

	this->_name = rhs.get_name();
	this->_hit_points = rhs.get_hit_points();
	this->_energy_points = rhs.get_energy_points();
	this->_attack_damage = rhs.get_attack_damage();
	
	return (*this);
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!" << std::endl;
}
