/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 03:16:35 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/16 23:15:48 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	this->_name = "Standard FragTrap";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "ScavTrap default constructor has been called!" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "FragTrap's parametrized constructor has been called!" << std::endl;
}

FragTrap::FragTrap( const FragTrap& ref) : ClapTrap(ref)
{
	std::cout << "FragTrap's copy constructor has been called!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap's destructor has been called!" << std::endl;
}

FragTrap& FragTrap::operator=( const FragTrap& rhs )
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

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap" << this->_name << " is feeling positive! High fives, everyone! ✋" << std::endl;
}
