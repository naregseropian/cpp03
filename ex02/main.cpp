#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

    std::cout << std::endl;

    FragTrap player3("Mysteryman");

    player3.attack("bot3");
    player3.highFivesGuys();

    return 0;
}
