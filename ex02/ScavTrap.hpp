/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 13:08:16 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/29 17:39:34 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap(std::string name = "default name");
		~ScavTrap( void );
		ScavTrap( const ScavTrap& orig);
		ScavTrap& operator = ( const ScavTrap& orig);
		
		
		void guardGate( void );
		void attack(const std::string& target);
};