/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:04:22 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/29 17:24:24 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class ClapTrap
{
	protected:
		std::string m_name;
		int m_hitPoints;
		int m_energyPoints;
		int m_attackDamage;

	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap(std::string name = "default name", int hitpoints = 10, int energypoints = 10, int attackdamage = 0);
		~ClapTrap(void);
		ClapTrap( const ClapTrap& orig); // copy constructor
		ClapTrap& operator = ( const ClapTrap& orig);
};
