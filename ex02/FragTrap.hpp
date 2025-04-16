/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:54:19 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/16 17:07:47 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name = "default name");
		~FragTrap( void );
		FragTrap( const FragTrap& orig);
		FragTrap& operator = ( const FragTrap& orig);
	

		void highFivesGuys(void);
		void attack(const std::string& target);
	
};