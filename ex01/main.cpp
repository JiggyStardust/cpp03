/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:55:48 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/16 16:43:14 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap bob("Bob");
	ScavTrap child("Child bob");
	bob.attack("Child bob");
	child.takeDamage(0);
	child.beRepaired(0);
	child.attack("Father bob");
	bob.takeDamage(20);
	bob.beRepaired(20);
	child.guardGate();
	return (0);
}