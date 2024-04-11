
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap " << _name << " Default Constructor called" << std::endl;
    _name = "noName";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    return;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << "FragTrap " << _name << " Param Constructor called" << std::endl;
    _name = name;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    return;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap " << _name << " Copy Constructor called" << std::endl;
    *this = other;
    return;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
    std::cout << "FragTrap " << _name << " Copy assignment operator called" << std::endl;
    ClapTrap::operator=(rhs);
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " Default Destructor called" << std::endl;
    return;
}

void FragTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _energyPoints--;
        std::cout << "FragTrap " << this->_name << " attacks " << target << " with " << this->_attackDamage << " dp!" << std::endl;
    }
    else
        std::cout << "FragTrap " << _name << "has not enough hp or no ep to attack!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if (_energyPoints > 0 && _hitPoints > 0)
        std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
    return;
}