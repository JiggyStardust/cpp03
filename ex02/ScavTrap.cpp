/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 13:07:45 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/16 16:53:24 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) :
ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap " << m_name << " constructed." << std::endl;
	std::cout << "Hit points: " << m_hitPoints << std::endl;
	std::cout << "Energy points: " << m_energyPoints << std::endl;
	std::cout << "Attack damage: " << m_attackDamage << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " << m_name << " destroyed" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& orig)
{
	std::cout << "copy constructor called." << std::endl;
	*this = orig;
}

ScavTrap& ScavTrap::operator = ( const ScavTrap& orig)
{
	if (this != &orig)
	{
		m_attackDamage = orig.m_attackDamage;
		m_energyPoints = orig.m_energyPoints;
		m_hitPoints = orig.m_hitPoints;;
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (m_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << m_name << " can't attack. They're dead (no hits points)."
		<< std::endl;
		return ;
	}
	if (m_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << m_name << " can't attack without energy points"
		<< std::endl;
		return ;
	}
	std::cout << "ScavTrap " << m_name << " attacks " << target << ", causing "
				<< m_attackDamage  << " points of damage!" << std::endl;
	m_energyPoints--;
}


void ScavTrap::guardGate( void )
{
	if (m_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << m_name << " is dead (no hits points)."
		<< std::endl;
		return ;
	}
	std::cout << "ScavTrap " << m_name << " is now in Gate keeper mode." << std::endl;
}