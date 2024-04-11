#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap " << _name << " Default Constructor called" << std::endl;
    _name = "noName";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    return;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << "ScavTrap " << _name << " Param Constructor called" << std::endl;
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    return;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap " << _name << " Copy Constructor called" << std::endl;
    *this = other;
    return;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
    std::cout << "ScavTrap " << _name << " Copy assignment operator called" << std::endl;
    ClapTrap::operator=(rhs);
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " Default Destructor called" << std::endl;
    return;
}

void ScavTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _energyPoints--;
        std::cout << "ScavTrap " << this->_name << " attacks " << target << " with " << this->_attackDamage << " dp!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << _name << "has not enough hp or no ep to attack!" << std::endl;
}

void ScavTrap::guardGate()
{
    if (_energyPoints > 0 && _hitPoints > 0)
        std::cout << "ScavTrap " << this->_name << " is guarding the gate!" << std::endl;
    return;
}
