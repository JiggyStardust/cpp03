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
		m_hitPoints = orig.m_hitPoints;
		m_energyPoints = orig.m_energyPoints;
		m_attackDamage = orig.m_attackDamage;
	}
	return (*this);
}

void FragTrap::highFiveGuys( void )
{
	std::cout << "FragTrap " << m_name << ": gimme five guys!" << std::endl;
}