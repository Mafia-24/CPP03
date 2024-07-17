/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 02:53:23 by ymafaman          #+#    #+#             */
/*   Updated: 2024/07/17 02:38:28 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap{

public :

	// Constructors
	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( const FragTrap& ref);

	// Destructor
	virtual ~FragTrap();

	// Assignment operator overload
	FragTrap&	operator=( const FragTrap& rhs );

	// Public memeber functions
	void	highFivesGuys( void );

};


#endif