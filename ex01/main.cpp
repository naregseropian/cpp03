#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap player1("Batman");

    player1.attack("bot");
    player1.takeDamage(2);
    player1.beRepaired(10);

    std::cout << std::endl;

    ScavTrap player2("Robin");

    player2.attack("bot2");
    player2.guardGate();

    return 0;
}

/*
the process of destruction follows the principle of "stack unwinding," 
which means it operates in the reverse order of construction. 
This ensures that all resources and dependent objects are properly cleaned up, 
following the correct sequence.
*/
