/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saaraniemela <saaraniemela@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:55:48 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/30 12:59:35 by saaraniemel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap bob("Bob");
	ScavTrap child("Child bob");
	child.attack("Bob");
	bob.takeDamage(20);
	bob.beRepaired(20);
	child.guardGate();
	bob.attack("Child Bob");
	child.takeDamage(20);
	child.beRepaired(20);

	std::cout << "\n\n FragTrap enters the chat \n" << std::endl; 
	FragTrap steve("Steve");
	steve.highFiveGuys();
	child.attack("Steve");
	steve.takeDamage(20);
	steve.attack("Child bob");
	child.takeDamage(30);
	steve.attack("Bob");
	bob.takeDamage(30);
	bob.beRepaired(10);
	steve.attack("Bob");
	bob.takeDamage(30);
	bob.beRepaired(10);
	steve.highFiveGuys();
	
	return (0);
}