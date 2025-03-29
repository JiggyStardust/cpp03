/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:55:48 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/29 17:37:23 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	// ClapTrap bob("Bob");
	ScavTrap child("Child bob");
	child.attack("Father bob");
	child.takeDamage(20);
	child.beRepaired(20);
	child.guardGate();
	return (0);
}