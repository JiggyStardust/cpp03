/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:55:52 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/17 12:50:19 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name) :
ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap " << m_name << " constructed." << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap " << m_name << " destroyed." << std::endl;
}


FragTrap::FragTrap( const FragTrap& orig )
{
	std::cout << "copy constructor called" << std::endl;
	*this = orig;
}

FragTrap& FragTrap::operator = (const FragTrap& orig)
{
	if (this != &orig)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		m_hitPoints = orig.m_hitPoints;
		m_energyPoints = orig.m_energyPoints;
		m_attackDamage = orig.m_attackDamage;
	}
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	if (m_hitPoints <= 0)
	{
		std::cout << "FragTrap " << m_name << " can't attack. They're dead (no hits points)."
		<< std::endl;
		return ;
	}
	if (m_energyPoints <= 0)
	{
		std::cout << "FragTrap " << m_name << " can't attack without energy points"
		<< std::endl;
		return ;
	}
	std::cout << "FragTrap " << m_name << " attacks " << target << ", causing "
				<< m_attackDamage  << " points of damage!" << std::endl;
	m_energyPoints--;
}

void FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << m_name << ": gimme five guys!" << std::endl;
}