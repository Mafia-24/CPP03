/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 02:36:02 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/17 02:48:00 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP


#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap
{


private :

	std::string name;
};



#endif