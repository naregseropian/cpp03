#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : _name("noName"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " Default Constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(const std::string& name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " Param Constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "ClapTrap " << _name << " Copy Constructor called" << std::endl;
    *this = other;
    return;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
    std::cout << "ClapTrap " << _name << " Copy assignment operator called" << std::endl;
    if (this != &rhs) // handles self assignment
    {
        _name = rhs._name;
        _attackDamage = rhs._attackDamage;
        _energyPoints = rhs._energyPoints;
        _hitPoints = rhs._hitPoints;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << "  Default Destructor called" << std::endl;
    return;
}

void ClapTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _energyPoints--;
        std::cout << "ClapTrap " << this->_name << " attacks " << target << " with " << this->_attackDamage << " dp!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << "has not enough hp or ep to attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _hitPoints -= amount;
        std::cout << "ClapTrap " << this->_name << " takes " << amount << " dp!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << "is dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _hitPoints += amount;
        _energyPoints--;
        std::cout << "ClapTrap " << this->_name << " heals with " << amount << " hp!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << "has not enough ep to heal!" << std::endl;
}
