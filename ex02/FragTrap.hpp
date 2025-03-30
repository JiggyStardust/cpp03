
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap( std::string name = "default name" );
		~FragTrap( void );
		FragTrap( const FragTrap& orig );
		FragTrap& operator = (const FragTrap& orig);

		void highFiveGuys( void );
};