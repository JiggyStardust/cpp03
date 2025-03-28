/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:04:22 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/28 16:03:26 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string m_name;
		int m_hitPoints;
		int m_energyPoints;
		int m_attackDamage;

	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap(std::string name = "default name"); // works now as a default constructor (needs to work without param)
		~ClapTrap(void);
		ClapTrap( const ClapTrap& orig); // copy constructor
		ClapTrap& operator = ( const ClapTrap& orig);
};
