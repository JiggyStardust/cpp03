/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:55:48 by sniemela          #+#    #+#             */
/*   Updated: 2025/03/28 16:28:10 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap bob("Bob");
	ClapTrap david("David");
	bob.attack("Leon");
	bob.takeDamage(10);
	bob.beRepaired(1);
	return (0);
}