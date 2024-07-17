/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 02:53:23 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/17 02:38:38 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap{

public :

	// Constructors
	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( const ScavTrap& ref);

	// Destructor
	virtual ~ScavTrap(); // not necessary to make it virtual because it is already virtual in the base class

	// Assignment operator overload
	ScavTrap&	operator=( const ScavTrap& rhs );

	// Public memeber functions
	void	guardGate( void );

};


#endif