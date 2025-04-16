/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:55:48 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/16 17:12:53 by sniemela         ###   ########.fr       */
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

	std::cout << "\n\nFragTrap enters the chat \n" << std::endl; 
	FragTrap steve("Steve");
	steve.highFivesGuys();
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
	steve.highFivesGuys();
	
	return (0);
}