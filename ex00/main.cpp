#include "ClapTrap.hpp"

int main()
{
    ClapTrap player("Hero");

    player.attack("bot");
    player.takeDamage(2);
    player.beRepaired(10);
    return 0;
}
