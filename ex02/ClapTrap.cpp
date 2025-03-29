/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:08:38 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/29 17:27:57 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name, int hitpoints, int energypoints, int attackdamage) :
				m_name(name),
				m_hitPoints(hitpoints), 
				m_energyPoints(energypoints),
				m_attackDamage(attackdamage)
{
	std::cout << "ClapTrap " << m_name << " constructed" << std::endl;
	std::cout << "Hit points: " << m_hitPoints << std::endl;
	std::cout << "Energy points: " << m_energyPoints << std::endl;
	std::cout << "Attack damage: " << m_attackDamage << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& orig)
{
	std::cout << "copy constructor called" << std::endl;
	*this = orig;
}

ClapTrap& ClapTrap::operator = ( const ClapTrap& orig)
{
	if (this != &orig)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		m_name = orig.m_name;
		m_energyPoints = orig.m_energyPoints;
		m_attackDamage = orig.m_attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << m_name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (m_energyPoints <= 0 || m_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << m_name << " can't attack without energy points and hit points"
		<< std::endl;
		return ;
	}
	std::cout << "ClapTrap " << m_name << " attacks " << target << ", causing "
				<< m_attackDamage  << " points of damage!" << std::endl;
	m_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << m_name << " takes " << amount << " points of damage!"
				<< std::endl;
	m_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (m_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << m_name << " is dead :(" << std::endl;
		return ;
	}
	if (m_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << m_name << " can't repair itself without energy points..."
		<< std::endl;
		return ;
	}
	std::cout << "ClapTrap " << m_name << " is repairing itself!" << std::endl;
	m_hitPoints += amount;
	m_energyPoints--;
}